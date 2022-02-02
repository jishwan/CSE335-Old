/**
 * \file Fish.cpp
 *
 * \author Jihwan Kim
 */

#include "pch.h"
#include "Fish.h"
#include "Aquarium.h"
#include "Item.h"

 /// Maximum speed in the X direction in
 /// in pixels per second
const double MaxSpeedX = 50;
/// Minimum speed in the X direction in
/// in pixels per second
const double MinSpeedX = 5;

 /**
  * Constructor
  * \param aquarium The aquarium we are in
  * \param filename Filename for the image we use
  */
CFish::CFish(CAquarium* aquarium, const std::wstring& filename) :
	CItem(aquarium, filename)
{
	mSpeedX = MinSpeedX + ((double)rand() / RAND_MAX) * (MaxSpeedX - MinSpeedX);
	mSpeedY = 0;
}

CFish::~CFish()
{
}

/**
 * Handle updates in time of our fish
 *
 * This is called before we draw and allows us to
 * move our fish. We add our speed times the amount
 * of time that has elapsed.
 * \param elapsed Time elapsed since the class call
 */
void CFish::Update(double elapsed)
{
	SetLocation(GetX() + mSpeedX * elapsed,
		GetY() + mSpeedY * elapsed);
	
	if (mSpeedX > 0 && GetX() >= GetAquarium()->GetWidth())
	{
		mSpeedX = -mSpeedX;
		SetMirror(mSpeedX < 0);
	}
	
}
