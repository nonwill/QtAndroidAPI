#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
}
namespace android::drm
{
	class DrmConvertedStatus;
}
namespace android::drm
{
	class DrmInfo;
}
namespace android::drm
{
	class DrmInfoRequest;
}
namespace android::drm
{
	class DrmRights;
}
namespace android::net
{
	class Uri;
}

namespace android::drm
{
	class DrmManagerClient : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_NONE();
		static jint ERROR_UNKNOWN();
		
		DrmManagerClient(QAndroidJniObject obj);
		// Constructors
		DrmManagerClient(android::content::Context &arg0);
		DrmManagerClient() = default;
		
		// Methods
		QAndroidJniObject acquireDrmInfo(android::drm::DrmInfoRequest arg0);
		jint acquireRights(android::drm::DrmInfoRequest arg0);
		jboolean canHandle(android::net::Uri arg0, jstring arg1);
		jboolean canHandle(android::net::Uri arg0, const QString &arg1);
		jboolean canHandle(jstring arg0, jstring arg1);
		jboolean canHandle(const QString &arg0, const QString &arg1);
		jint checkRightsStatus(android::net::Uri arg0);
		jint checkRightsStatus(jstring arg0);
		jint checkRightsStatus(const QString &arg0);
		jint checkRightsStatus(android::net::Uri arg0, jint arg1);
		jint checkRightsStatus(jstring arg0, jint arg1);
		jint checkRightsStatus(const QString &arg0, jint arg1);
		void close();
		QAndroidJniObject closeConvertSession(jint arg0);
		QAndroidJniObject convertData(jint arg0, jbyteArray arg1);
		jarray getAvailableDrmEngines();
		QAndroidJniObject getConstraints(android::net::Uri arg0, jint arg1);
		QAndroidJniObject getConstraints(jstring arg0, jint arg1);
		QAndroidJniObject getConstraints(const QString &arg0, jint arg1);
		jint getDrmObjectType(android::net::Uri arg0, jstring arg1);
		jint getDrmObjectType(android::net::Uri arg0, const QString &arg1);
		jint getDrmObjectType(jstring arg0, jstring arg1);
		jint getDrmObjectType(const QString &arg0, const QString &arg1);
		QAndroidJniObject getMetadata(android::net::Uri arg0);
		QAndroidJniObject getMetadata(jstring arg0);
		QAndroidJniObject getMetadata(const QString &arg0);
		jstring getOriginalMimeType(android::net::Uri arg0);
		jstring getOriginalMimeType(jstring arg0);
		jstring getOriginalMimeType(const QString &arg0);
		jint openConvertSession(jstring arg0);
		jint openConvertSession(const QString &arg0);
		jint processDrmInfo(android::drm::DrmInfo arg0);
		void release();
		jint removeAllRights();
		jint removeRights(android::net::Uri arg0);
		jint removeRights(jstring arg0);
		jint removeRights(const QString &arg0);
		jint saveRights(android::drm::DrmRights arg0, jstring arg1, jstring arg2);
		jint saveRights(android::drm::DrmRights arg0, const QString &arg1, const QString &arg2);
		void setOnErrorListener(__JniBaseClass arg0);
		void setOnEventListener(__JniBaseClass arg0);
		void setOnInfoListener(__JniBaseClass arg0);
	};
} // namespace android::drm

