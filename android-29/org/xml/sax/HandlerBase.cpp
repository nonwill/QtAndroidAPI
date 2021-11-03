#include "../../../JCharArray.hpp"
#include "../../../JString.hpp"
#include "./InputSource.hpp"
#include "./SAXParseException.hpp"
#include "./HandlerBase.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QJniObject forward
	HandlerBase::HandlerBase(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	HandlerBase::HandlerBase()
		: JObject(
			"org.xml.sax.HandlerBase",
			"()V"
		) {}
	
	// Methods
	void HandlerBase::characters(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void HandlerBase::endDocument()
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void HandlerBase::endElement(JString arg0)
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HandlerBase::error(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void HandlerBase::fatalError(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void HandlerBase::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void HandlerBase::notationDecl(JString arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void HandlerBase::processingInstruction(JString arg0, JString arg1)
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	org::xml::sax::InputSource HandlerBase::resolveEntity(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void HandlerBase::setDocumentLocator(JObject arg0)
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void HandlerBase::startDocument()
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void HandlerBase::startElement(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void HandlerBase::unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3)
	{
		callMethod<void>(
			"unparsedEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	void HandlerBase::warning(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax

