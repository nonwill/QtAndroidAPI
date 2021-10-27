#include "../../java/util/HashMap.hpp"
#include "./DrmEvent.hpp"

namespace android::drm
{
	// Fields
	jstring DrmEvent::DRM_INFO_OBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_OBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmEvent::DRM_INFO_STATUS_OBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_STATUS_OBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmEvent::TYPE_ALL_RIGHTS_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_ALL_RIGHTS_REMOVED"
		);
	}
	jint DrmEvent::TYPE_DRM_INFO_PROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_DRM_INFO_PROCESSED"
		);
	}
	
	DrmEvent::DrmEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject DrmEvent::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject DrmEvent::getAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jstring DrmEvent::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmEvent::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint DrmEvent::getUniqueId()
	{
		return __thiz.callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace android::drm
