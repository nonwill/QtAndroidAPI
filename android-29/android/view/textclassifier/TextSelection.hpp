#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextSelection : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jfloat getConfidenceScore(jstring arg0);
		jfloat getConfidenceScore(const QString &arg0);
		jstring getEntity(jint arg0);
		jint getEntityCount();
		QAndroidJniObject getExtras();
		jstring getId();
		jint getSelectionEndIndex();
		jint getSelectionStartIndex();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextSelection::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextSelection",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextSelection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextSelection",
			"(V)V");
	}
	
	// Methods
	jint TextSelection::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat TextSelection::getConfidenceScore(jstring arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat TextSelection::getConfidenceScore(const QString &arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TextSelection::getEntity(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint TextSelection::getEntityCount()
	{
		return __thiz.callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	QAndroidJniObject TextSelection::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring TextSelection::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextSelection::getSelectionEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getSelectionEndIndex",
			"()I"
		);
	}
	jint TextSelection::getSelectionStartIndex()
	{
		return __thiz.callMethod<jint>(
			"getSelectionStartIndex",
			"()I"
		);
	}
	jstring TextSelection::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextSelection::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextSelection : public __jni_impl::android::view::textclassifier::TextSelection
	{
	public:
		TextSelection(QAndroidJniObject obj) { __thiz = obj; }
		TextSelection()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION

