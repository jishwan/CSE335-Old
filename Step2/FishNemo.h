/**
 * \file FishNemo.h
 *
 * \author Jihwan Kim
 *
 * Class that implements Nemo The Fish
 *
 *
 */

#pragma once
#include <memory>

#include "Item.h"
#include "Fish.h"

  /**
   * Implements Nemo
   */
class CFishNemo : public CFish
{
public:
	///Constructor
	CFishNemo::CFishNemo(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishNemo() = delete;

	/// Copy constructor (disabled)
	CFishNemo(const CFishNemo&) = delete;

	/// Save this item to an XML node
	/// \return item node
	virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;

private:
	
};

