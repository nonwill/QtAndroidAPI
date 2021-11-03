#pragma once

#include "./NetworkEvent.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::admin
{
	class DnsEvent : public android::app::admin::NetworkEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DnsEvent(const char *className, const char *sig, Ts...agv) : android::app::admin::NetworkEvent(className, sig, std::forward<Ts>(agv)...) {}
		DnsEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString getHostname();
		JObject getInetAddresses();
		jint getTotalResolvedAddressCount();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

