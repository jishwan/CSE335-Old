/**
 * \file Item.h
 *
 * \author Jihwan Kim
 *
 * Base Class for Any Items
 *
 *
 */

#pragma once
#include "Aquarium.h"
#include <string>
#include "XmlNode.h"

class CAquarium;

 /**
 * Base class for any item in our aquarium.
 */
class CItem
{

public:
	/// Default constructor (disabled)
	CItem() = delete;

	/// Copy constructor (disabled)
	CItem(const CItem&) = delete;
	
	virtual ~CItem();

	/** The X location of the item
	 * \returns X location in pixels */
	double GetX() const { return mX; }

	/** The Y location of the item
	* \returns Y location in pixels */
	double GetY() const { return mY; }

	/// Draw this item
	/// \param graphics Graphics device to draw on
	virtual void Draw(Gdiplus::Graphics* graphics);

	/** Test this item to see if it has been clicked on
	 * \param x X location on the aquarium to test
	 * \param y Y location on the aquarium to test
	 * \return true if clicked on */
	virtual bool HitTest(int x, int y);

	/// Set the item location
	/// \param x X location
	/// \param y Y location
	virtual void SetLocation(double x, double y) { mX = x; mY = y; }

	/// Function to save attributes for item nodes
	/// \return item node
	virtual std::shared_ptr<xmlnode::CXmlNode> CItem::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node);

	/// Function to load attributes for item nodes
	virtual void XmlLoad(const std::shared_ptr<xmlnode::CXmlNode>& node);
	
	/// Handle updates for animation
	/// \param elapsed The time since the last update
	virtual void Update(double elapsed) {}

	/// Get the aquarium this item is in
	/// \returns Aquarium pointer
	CAquarium* GetAquarium() { return mAquarium; }
	
	/// Getter for image width
	/// \returns width
	int GetImageWidth() { return mItemImage->GetWidth(); }		

	/// Getter for image height
	/// \returns height
	int GetImageHeight() { return mItemImage->GetHeight(); }	

	/// Set the mirror status
	/// \param m New mirror flag
	void SetMirror(bool m) { mMirror = m; }
	
	
protected:
	/// Constructor
	/// \param aquarium The aquarium we are in
	/// \param filename Filename for the image we use
	CItem(CAquarium* aquarium, const std::wstring& filename);

private:
	/// The aquarium this item is contained in
	CAquarium* mAquarium;

	// Item location in the aquarium
	double  mX = 0;     ///< X location for the center of the item
	double  mY = 0;     ///< Y location for the center of the item
	
	/// The image of this fish
	std::unique_ptr<Gdiplus::Bitmap> mItemImage;

	bool mMirror = false;   ///< True mirrors the item image
};

