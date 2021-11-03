#pragma once

#include "../../../../JObject.hpp"
#include "../TransformerFactory.hpp"


namespace javax::xml::transform::sax
{
	class SAXTransformerFactory : public javax::xml::transform::TransformerFactory
	{
	public:
		// Fields
		static jstring FEATURE();
		static jstring FEATURE_XMLFILTER();
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXTransformerFactory(const char *className, const char *sig, Ts...agv) : javax::xml::transform::TransformerFactory(className, sig, std::forward<Ts>(agv)...) {}
		SAXTransformerFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject newTemplatesHandler();
		JObject newTransformerHandler();
		JObject newTransformerHandler(JObject arg0);
		JObject newXMLFilter(JObject arg0);
	};
} // namespace javax::xml::transform::sax

