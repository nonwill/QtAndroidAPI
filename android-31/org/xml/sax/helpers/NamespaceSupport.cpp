#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
#include "./NamespaceSupport.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	JString NamespaceSupport::NSDECL()
	{
		return getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"NSDECL",
			"Ljava/lang/String;"
		);
	}
	JString NamespaceSupport::XMLNS()
	{
		return getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"XMLNS",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	NamespaceSupport::NamespaceSupport(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NamespaceSupport::NamespaceSupport()
		: JObject(
			"org.xml.sax.helpers.NamespaceSupport",
			"()V"
		) {}
	
	// Methods
	jboolean NamespaceSupport::declarePrefix(JString arg0, JString arg1)
	{
		return callMethod<jboolean>(
			"declarePrefix",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject NamespaceSupport::getDeclaredPrefixes()
	{
		return callObjectMethod(
			"getDeclaredPrefixes",
			"()Ljava/util/Enumeration;"
		);
	}
	JString NamespaceSupport::getPrefix(JString arg0)
	{
		return callObjectMethod(
			"getPrefix",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject NamespaceSupport::getPrefixes()
	{
		return callObjectMethod(
			"getPrefixes",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject NamespaceSupport::getPrefixes(JString arg0)
	{
		return callObjectMethod(
			"getPrefixes",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	JString NamespaceSupport::getURI(JString arg0)
	{
		return callObjectMethod(
			"getURI",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jboolean NamespaceSupport::isNamespaceDeclUris()
	{
		return callMethod<jboolean>(
			"isNamespaceDeclUris",
			"()Z"
		);
	}
	void NamespaceSupport::popContext()
	{
		callMethod<void>(
			"popContext",
			"()V"
		);
	}
	JArray NamespaceSupport::processName(JString arg0, JArray arg1, jboolean arg2)
	{
		return callObjectMethod(
			"processName",
			"(Ljava/lang/String;[Ljava/lang/String;Z)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2
		);
	}
	void NamespaceSupport::pushContext()
	{
		callMethod<void>(
			"pushContext",
			"()V"
		);
	}
	void NamespaceSupport::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void NamespaceSupport::setNamespaceDeclUris(jboolean arg0)
	{
		callMethod<void>(
			"setNamespaceDeclUris",
			"(Z)V",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

