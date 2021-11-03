#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony::data
{
	class RouteSelectionDescriptor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ROUTE_SSC_MODE_1();
		static jint ROUTE_SSC_MODE_2();
		static jint ROUTE_SSC_MODE_3();
		static jint SESSION_TYPE_IPV4();
		static jint SESSION_TYPE_IPV4V6();
		static jint SESSION_TYPE_IPV6();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RouteSelectionDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteSelectionDescriptor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JObject getDataNetworkName();
		jint getPrecedence();
		jint getSessionType();
		JObject getSliceInfo();
		jint getSscMode();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

