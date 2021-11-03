#pragma once

#include "../../JObject.hpp"

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
	class DrmManagerClient : public JObject
	{
	public:
		// Fields
		static jint ERROR_NONE();
		static jint ERROR_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmManagerClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmManagerClient(QJniObject obj);
		
		// Constructors
		DrmManagerClient(android::content::Context arg0);
		
		// Methods
		android::drm::DrmInfo acquireDrmInfo(android::drm::DrmInfoRequest arg0);
		jint acquireRights(android::drm::DrmInfoRequest arg0);
		jboolean canHandle(android::net::Uri arg0, jstring arg1);
		jboolean canHandle(jstring arg0, jstring arg1);
		jint checkRightsStatus(android::net::Uri arg0);
		jint checkRightsStatus(jstring arg0);
		jint checkRightsStatus(android::net::Uri arg0, jint arg1);
		jint checkRightsStatus(jstring arg0, jint arg1);
		void close();
		android::drm::DrmConvertedStatus closeConvertSession(jint arg0);
		android::drm::DrmConvertedStatus convertData(jint arg0, jbyteArray arg1);
		jarray getAvailableDrmEngines();
		android::content::ContentValues getConstraints(android::net::Uri arg0, jint arg1);
		android::content::ContentValues getConstraints(jstring arg0, jint arg1);
		jint getDrmObjectType(android::net::Uri arg0, jstring arg1);
		jint getDrmObjectType(jstring arg0, jstring arg1);
		android::content::ContentValues getMetadata(android::net::Uri arg0);
		android::content::ContentValues getMetadata(jstring arg0);
		jstring getOriginalMimeType(android::net::Uri arg0);
		jstring getOriginalMimeType(jstring arg0);
		jint openConvertSession(jstring arg0);
		jint processDrmInfo(android::drm::DrmInfo arg0);
		void release();
		jint removeAllRights();
		jint removeRights(android::net::Uri arg0);
		jint removeRights(jstring arg0);
		jint saveRights(android::drm::DrmRights arg0, jstring arg1, jstring arg2);
		void setOnErrorListener(JObject arg0);
		void setOnEventListener(JObject arg0);
		void setOnInfoListener(JObject arg0);
	};
} // namespace android::drm

