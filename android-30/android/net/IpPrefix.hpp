#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class IpPrefix : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit IpPrefix(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpPrefix(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean contains(java::net::InetAddress arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		java::net::InetAddress getAddress();
		jint getPrefixLength();
		jbyteArray getRawAddress();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

