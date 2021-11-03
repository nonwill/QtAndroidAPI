#include "./TypeInfoProvider.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QJniObject forward
	TypeInfoProvider::TypeInfoProvider(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject TypeInfoProvider::getAttributeTypeInfo(jint arg0)
	{
		return callObjectMethod(
			"getAttributeTypeInfo",
			"(I)Lorg/w3c/dom/TypeInfo;",
			arg0
		);
	}
	JObject TypeInfoProvider::getElementTypeInfo()
	{
		return callObjectMethod(
			"getElementTypeInfo",
			"()Lorg/w3c/dom/TypeInfo;"
		);
	}
	jboolean TypeInfoProvider::isIdAttribute(jint arg0)
	{
		return callMethod<jboolean>(
			"isIdAttribute",
			"(I)Z",
			arg0
		);
	}
	jboolean TypeInfoProvider::isSpecified(jint arg0)
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
} // namespace javax::xml::validation

