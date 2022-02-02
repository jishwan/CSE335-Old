/**
 * \file FishKarp.h
 *
 * \author Jihwan Kim
 *
 * Class that implements Magikarp
 *
 *
 */

#pragma once
#include <memory>

#include "Item.h"
#include "Fish.h"

 /**
  * Implements Magikarp
  */
class CFishKarp : public CFish
{
public:
	///Constructor
	CFishKarp::CFishKarp(CAquarium* aquarium);


	/// Default constructor (disabled)
	CFishKarp() = delete;

	/// Copy constructor (disabled)
	CFishKarp(const CFishKarp&) = delete;

	/// Save this item to an XML node
	/// \return item node
	virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;


private:
	
};