/**
 * \file Fish.h
 *
 * \author Jihwan Kim
 *
 * Base Class for fish
 *
 *
 */

#pragma once
#include "Item.h"

 /**
  * Base class for a fish
  * This applies to all of the fish, but not the decor
  * items in the aquarium.
  */
class CFish : public CItem
{
public:
	virtual ~CFish();

	/// Default constructor (disabled)
	CFish() = delete;

	/// Copy constructor (disabled)
	CFish(const CFish&) = delete;
	
	void Update(double elapsed);



	/// Set the fish speed
	/// \param speedx Speed in X direction
	/// \param speedy Speed in Y direction
	void SetSpeed(double speedx, double speedy) { mSpeedX = speedx; mSpeedY = speedy; }

protected:
	CFish(CAquarium* aquarium, const std::wstring& filename);

	

private:
	/// Fish speed in the X direction
	double mSpeedX;

	/// Fish speed in the Y direction
	double mSpeedY;
};

