#include "../../../../JCharArray.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/util/Locale.hpp"
#include "../InputSource.hpp"
#include "./XMLReaderAdapter.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	XMLReaderAdapter::XMLReaderAdapter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	XMLReaderAdapter::XMLReaderAdapter()
		: JObject(
			"org.xml.sax.helpers.XMLReaderAdapter",
			"()V"
		) {}
	XMLReaderAdapter::XMLReaderAdapter(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.XMLReaderAdapter",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		) {}
	
	// Methods
	void XMLReaderAdapter::characters(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void XMLReaderAdapter::endDocument()
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void XMLReaderAdapter::endElement(JString arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void XMLReaderAdapter::endPrefixMapping(JString arg0)
	{
		callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void XMLReaderAdapter::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void XMLReaderAdapter::parse(JString arg0)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void XMLReaderAdapter::parse(org::xml::sax::InputSource arg0)
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void XMLReaderAdapter::processingInstruction(JString arg0, JString arg1)
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void XMLReaderAdapter::setDTDHandler(JObject arg0)
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	void XMLReaderAdapter::setDocumentHandler(JObject arg0)
	{
		callMethod<void>(
			"setDocumentHandler",
			"(Lorg/xml/sax/DocumentHandler;)V",
			arg0.object()
		);
	}
	void XMLReaderAdapter::setDocumentLocator(JObject arg0)
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void XMLReaderAdapter::setEntityResolver(JObject arg0)
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void XMLReaderAdapter::setErrorHandler(JObject arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void XMLReaderAdapter::setLocale(java::util::Locale arg0)
	{
		callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void XMLReaderAdapter::skippedEntity(JString arg0)
	{
		callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void XMLReaderAdapter::startDocument()
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void XMLReaderAdapter::startElement(JString arg0, JString arg1, JString arg2, JObject arg3)
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void XMLReaderAdapter::startPrefixMapping(JString arg0, JString arg1)
	{
		callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

