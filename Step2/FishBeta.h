/**
 * \file FishBeta.h
 *
 * \author Jihwan Kim
 *
 * Class that implements the Beta Fish
 *
 *
 */

#pragma once
#include <memory>

#include "Item.h"
#include "Fish.h"

 /**
  * Implements a Beta fish
  */
class CFishBeta : public CFish
{
public:
	///Constructor
	CFishBeta::CFishBeta(CAquarium* aquarium);
	
	/// Default constructor (disabled)
	CFishBeta() = delete;

	/// Copy constructor (disabled)
	CFishBeta(const CFishBeta&) = delete;

	/// Save this item to an XML node
	/// \return item node
	virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;

private:
};