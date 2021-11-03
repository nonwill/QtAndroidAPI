#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class FeatureGroupInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		JArray features();
		
		// QJniObject forward
		template<typename ...Ts> explicit FeatureGroupInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FeatureGroupInfo(QJniObject obj);
		
		// Constructors
		FeatureGroupInfo();
		FeatureGroupInfo(android::content::pm::FeatureGroupInfo &arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

