#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class SparseArray;
}
class JString;

namespace android::view::translation
{
	class TranslationResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TRANSLATION_STATUS_CONTEXT_UNSUPPORTED();
		static jint TRANSLATION_STATUS_SUCCESS();
		static jint TRANSLATION_STATUS_UNKNOWN_ERROR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponse(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::util::SparseArray getTranslationResponseValues();
		jint getTranslationStatus();
		android::util::SparseArray getViewTranslationResponses();
		jboolean isFinalResponse();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

