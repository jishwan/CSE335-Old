/**
 * \file FishNemo.cpp
 *
 * \author Jihwan Kim
 */


#include "pch.h"
#include <string>
#include "FishNemo.h"
#include "Fish.h"


using namespace std;
using namespace Gdiplus;

/// Fish filename 
const wstring FishNemoImageName = L"images/nemo.png";
/**
* Constructor
* \param aquarium Aquarium this fish is a member of
*/
CFishNemo::CFishNemo(CAquarium* aquarium) : CFish(aquarium, FishNemoImageName)
{	
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode> CFishNemo::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	auto itemNode = CItem::XmlSave(node);

	itemNode->SetAttribute(L"type", L"nemo");

	return itemNode;
}