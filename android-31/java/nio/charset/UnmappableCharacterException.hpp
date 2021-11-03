#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./CharacterCodingException.hpp"


namespace java::nio::charset
{
	class UnmappableCharacterException : public java::nio::charset::CharacterCodingException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnmappableCharacterException(const char *className, const char *sig, Ts...agv) : java::nio::charset::CharacterCodingException(className, sig, std::forward<Ts>(agv)...) {}
		UnmappableCharacterException(QJniObject obj);
		
		// Constructors
		UnmappableCharacterException(jint arg0);
		
		// Methods
		jint getInputLength();
		jstring getMessage();
	};
} // namespace java::nio::charset

