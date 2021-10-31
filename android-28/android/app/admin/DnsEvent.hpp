#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./NetworkEvent.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class DnsEvent : public android::app::admin::NetworkEvent
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsEvent(const char *className, const char *sig, Ts...agv) : android::app::admin::NetworkEvent(className, sig, std::forward<Ts>(agv)...) {}
		DnsEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getHostname();
		__JniBaseClass getInetAddresses();
		jint getTotalResolvedAddressCount();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

