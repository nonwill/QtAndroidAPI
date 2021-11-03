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
	class TranslationResponseValue;
}
class JObject;
class JString;

namespace android::view::translation
{
	class ViewTranslationResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewTranslationResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationResponse(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::view::autofill::AutofillId getAutofillId() const;
		JObject getKeys() const;
		android::view::translation::TranslationResponseValue getValue(JString arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

