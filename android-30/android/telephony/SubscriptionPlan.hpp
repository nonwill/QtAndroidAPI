#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class SubscriptionPlan : public __JniBaseClass
	{
	public:
		// Fields
		static jlong BYTES_UNKNOWN();
		static jlong BYTES_UNLIMITED();
		static __JniBaseClass CREATOR();
		static jint LIMIT_BEHAVIOR_BILLED();
		static jint LIMIT_BEHAVIOR_DISABLED();
		static jint LIMIT_BEHAVIOR_THROTTLED();
		static jint LIMIT_BEHAVIOR_UNKNOWN();
		static jlong TIME_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptionPlan(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionPlan(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass cycleIterator();
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getDataLimitBehavior();
		jlong getDataLimitBytes();
		jlong getDataUsageBytes();
		jlong getDataUsageTime();
		jintArray getNetworkTypes();
		jstring getSummary();
		jstring getTitle();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

