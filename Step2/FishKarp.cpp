/**
 * \file FishKarp.cpp
 *
 * \author Jihwan Kim
 */

#include "pch.h"
#include <string>
#include "FishKarp.h"
#include "Fish.h"

using namespace std;
using namespace Gdiplus;

/// Fish filename 
const wstring FishKarpImageName = L"images/magikarp.png";
/**
* Constructor
* \param aquarium Aquarium this fish is a member of
*/
CFishKarp::CFishKarp(CAquarium* aquarium) : CFish(aquarium, FishKarpImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode> CFishKarp::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	auto itemNode = CItem::XmlSave(node);
	itemNode->SetAttribute(L"type", L"karp");
	return itemNode;
}