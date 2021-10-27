#include "./MediaDrm_KeyRequest.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_KeyRequest::REQUEST_TYPE_INITIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_INITIAL"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_NONE"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RELEASE"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_RENEWAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RENEWAL"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_UPDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_UPDATE"
		);
	}
	
	MediaDrm_KeyRequest::MediaDrm_KeyRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyteArray MediaDrm_KeyRequest::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring MediaDrm_KeyRequest::getDefaultUrl()
	{
		return __thiz.callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaDrm_KeyRequest::getRequestType()
	{
		return __thiz.callMethod<jint>(
			"getRequestType",
			"()I"
		);
	}
} // namespace android::media
