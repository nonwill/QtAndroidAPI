#pragma once

#include "../../../../JObject.hpp"

class JCharArray;
class JString;
namespace org::xml::sax
{
	class InputSource;
}
namespace org::xml::sax
{
	class SAXParseException;
}

namespace org::xml::sax::helpers
{
	class DefaultHandler : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DefaultHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DefaultHandler(QJniObject obj);
		
		// Constructors
		DefaultHandler();
		
		// Methods
		void characters(JCharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(JString arg0, JString arg1, JString arg2);
		void endPrefixMapping(JString arg0);
		void error(org::xml::sax::SAXParseException arg0);
		void fatalError(org::xml::sax::SAXParseException arg0);
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2);
		void notationDecl(JString arg0, JString arg1, JString arg2);
		void processingInstruction(JString arg0, JString arg1);
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1);
		void setDocumentLocator(JObject arg0);
		void skippedEntity(JString arg0);
		void startDocument();
		void startElement(JString arg0, JString arg1, JString arg2, JObject arg3);
		void startPrefixMapping(JString arg0, JString arg1);
		void unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3);
		void warning(org::xml::sax::SAXParseException arg0);
	};
} // namespace org::xml::sax::helpers

