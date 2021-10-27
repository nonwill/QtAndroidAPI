#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class DisconnectCause : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANSWERED_ELSEWHERE();
		static jint BUSY();
		static jint CALL_PULLED();
		static jint CANCELED();
		static jint CONNECTION_MANAGER_NOT_SUPPORTED();
		static QAndroidJniObject CREATOR();
		static jint ERROR();
		static jint LOCAL();
		static jint MISSED();
		static jint OTHER();
		static jint REJECTED();
		static jint REMOTE();
		static jint RESTRICTED();
		static jint UNKNOWN();
		
		DisconnectCause(QAndroidJniObject obj);
		// Constructors
		DisconnectCause(jint &arg0);
		DisconnectCause(jint &arg0, jstring &arg1);
		DisconnectCause(jint &arg0, const QString &arg1);
		DisconnectCause(jint &arg0, jstring &arg1, jstring &arg2, jstring &arg3);
		DisconnectCause(jint &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		DisconnectCause(jint &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jint &arg4);
		DisconnectCause(jint &arg0, const QString &arg1, const QString &arg2, const QString &arg3, jint &arg4);
		DisconnectCause() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCode();
		jstring getDescription();
		jstring getLabel();
		jstring getReason();
		jint getTone();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

