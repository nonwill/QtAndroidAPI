#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::translation
{
	class TranslationRequestValue;
}
class JObject;
class JString;

namespace android::view::translation
{
	class ViewTranslationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString ID_TEXT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewTranslationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::view::autofill::AutofillId getAutofillId();
		JObject getKeys();
		android::view::translation::TranslationRequestValue getValue(JString arg0);
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

