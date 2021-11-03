#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::inputmethod
{
	class InlineSuggestionsRequest;
}

namespace android::service::autofill
{
	class FillRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_COMPATIBILITY_MODE_REQUEST();
		static jint FLAG_MANUAL_REQUEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::Bundle getClientState();
		JObject getFillContexts();
		jint getFlags();
		jint getId();
		android::view::inputmethod::InlineSuggestionsRequest getInlineSuggestionsRequest();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

