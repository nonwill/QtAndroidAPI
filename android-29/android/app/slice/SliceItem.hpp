#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class RemoteInput;
}
namespace __jni_impl::android::app::slice
{
	class Slice;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::slice
{
	class SliceItem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring FORMAT_ACTION();
		static jstring FORMAT_BUNDLE();
		static jstring FORMAT_IMAGE();
		static jstring FORMAT_INT();
		static jstring FORMAT_LONG();
		static jstring FORMAT_REMOTE_INPUT();
		static jstring FORMAT_SLICE();
		static jstring FORMAT_TEXT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAction();
		QAndroidJniObject getBundle();
		jstring getFormat();
		QAndroidJniObject getHints();
		QAndroidJniObject getIcon();
		jint getInt();
		jlong getLong();
		QAndroidJniObject getRemoteInput();
		QAndroidJniObject getSlice();
		jstring getSubType();
		jstring getText();
		jboolean hasHint(jstring arg0);
		jboolean hasHint(const QString &arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::slice

#include "../PendingIntent.hpp"
#include "../RemoteInput.hpp"
#include "./Slice.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	QAndroidJniObject SliceItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring SliceItem::FORMAT_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_IMAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_LONG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_REMOTE_INPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_REMOTE_INPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_SLICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_SLICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SliceItem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceItem",
			"(V)V");
	}
	
	// Methods
	jint SliceItem::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject SliceItem::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject SliceItem::getBundle()
	{
		return __thiz.callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jstring SliceItem::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SliceItem::getHints()
	{
		return __thiz.callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SliceItem::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jint SliceItem::getInt()
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"()I"
		);
	}
	jlong SliceItem::getLong()
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"()J"
		);
	}
	QAndroidJniObject SliceItem::getRemoteInput()
	{
		return __thiz.callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	QAndroidJniObject SliceItem::getSlice()
	{
		return __thiz.callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	jstring SliceItem::getSubType()
	{
		return __thiz.callObjectMethod(
			"getSubType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean SliceItem::hasHint(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasHint",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SliceItem::hasHint(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasHint",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SliceItem::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class SliceItem : public __jni_impl::android::app::slice::SliceItem
	{
	public:
		SliceItem(QAndroidJniObject obj) { __thiz = obj; }
		SliceItem()
		{
			__constructor();
		}
	};
} // namespace android::app::slice

