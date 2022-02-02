/**
 * \file FishBeta.cpp
 *
 * \author Jihwan Kim
 */

#include "pch.h"
#include <string>
#include "FishBeta.h"
#include "Fish.h"

using namespace std;
using namespace Gdiplus;


 /// Fish filename 
const wstring FishBetaImageName = L"images/beta.png";

/**
* Constructor
* \param aquarium Aquarium this fish is a member of
*/
CFishBeta::CFishBeta(CAquarium* aquarium) : CFish(aquarium, FishBetaImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode> CFishBeta::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	auto itemNode = CItem::XmlSave(node);

	itemNode->SetAttribute(L"type", L"beta");

	return itemNode;
}