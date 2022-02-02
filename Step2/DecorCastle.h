/**
 * \file Aquarium.h
 *
 * \author Jihwan Kim
 *
 * Class that implements the Decoration Castle
 *
 */

#pragma once

#include "Item.h"

 /**
  * Implements castle decoration
  */
class CDecorCastle : public CItem
{
public:
	/// Constructor
	CDecorCastle::CDecorCastle(CAquarium* aquarium);

	/// Default constructor (disabled)
	CDecorCastle() = delete;

	/// Copy constructor (disabled)
	CDecorCastle(const CDecorCastle&) = delete;

	/// Save this item to an XML node
	/// Function to save attributes for item nodes
	/// \return item node
	virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;
};

