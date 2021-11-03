#pragma once

#include "../../../java/text/ParseException.hpp"

class JObject;
class JString;

namespace android::icu::text
{
	class StringPrepParseException : public java::text::ParseException
	{
	public:
		// Fields
		static jint ACE_PREFIX_ERROR();
		static jint BUFFER_OVERFLOW_ERROR();
		static jint CHECK_BIDI_ERROR();
		static jint DOMAIN_NAME_TOO_LONG_ERROR();
		static jint ILLEGAL_CHAR_FOUND();
		static jint INVALID_CHAR_FOUND();
		static jint LABEL_TOO_LONG_ERROR();
		static jint PROHIBITED_ERROR();
		static jint STD3_ASCII_RULES_ERROR();
		static jint UNASSIGNED_ERROR();
		static jint VERIFICATION_ERROR();
		static jint ZERO_LENGTH_LABEL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringPrepParseException(const char *className, const char *sig, Ts...agv) : java::text::ParseException(className, sig, std::forward<Ts>(agv)...) {}
		StringPrepParseException(QAndroidJniObject obj);
		
		// Constructors
		StringPrepParseException(JString arg0, jint arg1);
		StringPrepParseException(JString arg0, jint arg1, JString arg2, jint arg3);
		StringPrepParseException(JString arg0, jint arg1, JString arg2, jint arg3, jint arg4);
		
		// Methods
		jboolean equals(JObject arg0);
		jint getError();
		jint hashCode();
		JString toString();
	};
} // namespace android::icu::text

