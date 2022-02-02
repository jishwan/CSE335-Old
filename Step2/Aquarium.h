/**
 * \file Aquarium.h
 *
 * \author Jihwan Kim
 *
 * Class that implements the Aquarium
 *
 *
 */

#pragma once

#include <memory>
#include <vector>
#include <string>
#include "XmlNode.h"


class CItem;

/**
 * Represents an aquarium
 */
class CAquarium
{
public:
	CAquarium();
	virtual ~CAquarium();
	void Add(std::shared_ptr<CItem> item);
	void OnDraw(Gdiplus::Graphics* graphics);

	/// function to move the grabbed item to the back of mItems
	void MoveToBack(std::shared_ptr<CItem> item);

	/// function to save the aquarium
	void Save(const std::wstring &filename);

	/// function to open the aquarium file
	void Load(const std::wstring& filename);

	/// function to clear the aquarium data.
	void Clear();

	///Hit Test of the mouse
	std::shared_ptr<CItem> HitTest(int x, int y);

	/// Function to handle updates for animation
	void Update(double elapsed);

	/// Get the width of the aquarium
	/// \returns Aquarium width
	int GetWidth() const { return mBackground->GetWidth(); }


	/// Get the height of the aquarium
	/// \returns Aquarium height
	int GetHeight() const { return mBackground->GetHeight(); }

private:
	std::unique_ptr<Gdiplus::Bitmap> mBackground; ///< Background image to use

	/// All of the items to populate our aquarium
	std::vector<std::shared_ptr<CItem> > mItems;
	
	/// Function to handle the < item > tag
	void XmlItem(const std::shared_ptr<xmlnode::CXmlNode>& node);

};
