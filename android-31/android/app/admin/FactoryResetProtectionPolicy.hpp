#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class FactoryResetProtectionPolicy : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FactoryResetProtectionPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FactoryResetProtectionPolicy(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JObject getFactoryResetProtectionAccounts();
		jboolean isFactoryResetProtectionEnabled();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

