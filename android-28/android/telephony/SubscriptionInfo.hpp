#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class SubscriptionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Bitmap createIconBitmap(android::content::Context arg0);
		jint describeContents();
		jstring getCarrierName();
		jstring getCountryIso();
		jint getDataRoaming();
		jstring getDisplayName();
		jstring getIccId();
		jint getIconTint();
		jint getMcc();
		jint getMnc();
		jstring getNumber();
		jint getSimSlotIndex();
		jint getSubscriptionId();
		jboolean isEmbedded();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

