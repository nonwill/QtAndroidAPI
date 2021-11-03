#pragma once

#include "../../../JObject.hpp"


namespace javax::xml::datatype
{
	class DatatypeConstants_Field : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DatatypeConstants_Field(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatatypeConstants_Field(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getId();
		jstring toString();
	};
} // namespace javax::xml::datatype

