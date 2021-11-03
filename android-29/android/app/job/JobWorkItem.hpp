#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::job
{
	class JobWorkItem : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit JobWorkItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobWorkItem(QJniObject obj);
		
		// Constructors
		JobWorkItem(android::content::Intent arg0);
		JobWorkItem(android::content::Intent arg0, jlong arg1, jlong arg2);
		
		// Methods
		jint describeContents();
		jint getDeliveryCount();
		jlong getEstimatedNetworkDownloadBytes();
		jlong getEstimatedNetworkUploadBytes();
		android::content::Intent getIntent();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::job

