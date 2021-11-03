#pragma once

#include "../../JObject.hpp"


namespace android::speech
{
	class RecognizerResultsIntent : public JObject
	{
	public:
		// Fields
		static jstring ACTION_VOICE_SEARCH_RESULTS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_HTML();
		static jstring EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_STRINGS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_URLS();
		static jstring URI_SCHEME_INLINE();
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognizerResultsIntent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognizerResultsIntent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::speech

