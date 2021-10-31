#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::hotspot2::pps
{
	class Credential_UserCredential : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Credential_UserCredential(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Credential_UserCredential(QJniObject obj);
		
		// Constructors
		Credential_UserCredential();
		Credential_UserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getEapType();
		jstring getNonEapInnerMethod();
		jstring getPassword();
		jstring getUsername();
		jint hashCode();
		void setEapType(jint arg0);
		void setNonEapInnerMethod(jstring arg0);
		void setPassword(jstring arg0);
		void setUsername(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

