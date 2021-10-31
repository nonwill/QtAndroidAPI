#include "../namespace/QName.hpp"
#include "./XPathConstants.hpp"

namespace javax::xml::xpath
{
	// Fields
	javax::xml::_namespace::QName XPathConstants::BOOLEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"BOOLEAN",
			"Ljavax/xml/namespace/QName;"
		);
	}
	jstring XPathConstants::DOM_OBJECT_MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"DOM_OBJECT_MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	javax::xml::_namespace::QName XPathConstants::NODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODE",
			"Ljavax/xml/namespace/QName;"
		);
	}
	javax::xml::_namespace::QName XPathConstants::NODESET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODESET",
			"Ljavax/xml/namespace/QName;"
		);
	}
	javax::xml::_namespace::QName XPathConstants::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NUMBER",
			"Ljavax/xml/namespace/QName;"
		);
	}
	javax::xml::_namespace::QName XPathConstants::STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"STRING",
			"Ljavax/xml/namespace/QName;"
		);
	}
	
	// QAndroidJniObject forward
	XPathConstants::XPathConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace javax::xml::xpath

