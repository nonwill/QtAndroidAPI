#pragma once

#include "./CellIdentity.def.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellIdentityWcdma : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellIdentityWcdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityWcdma(QJniObject obj) : android::telephony::CellIdentity(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getCid() const;
		jint getLac() const;
		jint getMcc() const;
		JString getMccString() const;
		jint getMnc() const;
		JString getMncString() const;
		JString getMobileNetworkOperator() const;
		jint getPsc() const;
		jint getUarfcn() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

