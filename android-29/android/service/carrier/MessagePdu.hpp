#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::carrier
{
	class MessagePdu : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MessagePdu(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessagePdu(QJniObject obj);
		
		// Constructors
		MessagePdu(JObject arg0);
		
		// Methods
		jint describeContents();
		JObject getPdus();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::carrier

