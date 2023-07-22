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
class JObject;
class JString;

namespace android::bluetooth::le
{
	class AdvertiseData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertiseData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseData(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jboolean getIncludeDeviceName() const;
		jboolean getIncludeTxPowerLevel() const;
		android::util::SparseArray getManufacturerSpecificData() const;
		JObject getServiceData() const;
		JObject getServiceSolicitationUuids() const;
		JObject getServiceUuids() const;
		JObject getTransportDiscoveryData() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

