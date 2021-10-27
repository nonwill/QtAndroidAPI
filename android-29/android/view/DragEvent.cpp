#include "../content/ClipData.hpp"
#include "../content/ClipDescription.hpp"
#include "../os/Parcel.hpp"
#include "./DragEvent.hpp"

namespace android::view
{
	// Fields
	jint DragEvent::ACTION_DRAG_ENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENDED"
		);
	}
	jint DragEvent::ACTION_DRAG_ENTERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENTERED"
		);
	}
	jint DragEvent::ACTION_DRAG_EXITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_EXITED"
		);
	}
	jint DragEvent::ACTION_DRAG_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_LOCATION"
		);
	}
	jint DragEvent::ACTION_DRAG_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_STARTED"
		);
	}
	jint DragEvent::ACTION_DROP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DROP"
		);
	}
	QAndroidJniObject DragEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.DragEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DragEvent::DragEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DragEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint DragEvent::getAction()
	{
		return __thiz.callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	QAndroidJniObject DragEvent::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	QAndroidJniObject DragEvent::getClipDescription()
	{
		return __thiz.callObjectMethod(
			"getClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	jobject DragEvent::getLocalState()
	{
		return __thiz.callObjectMethod(
			"getLocalState",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DragEvent::getResult()
	{
		return __thiz.callMethod<jboolean>(
			"getResult",
			"()Z"
		);
	}
	jfloat DragEvent::getX()
	{
		return __thiz.callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat DragEvent::getY()
	{
		return __thiz.callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jstring DragEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DragEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view
