#include "../../os/Parcel.hpp"
#include "./TextInfo.hpp"

namespace android::view::textservice
{
	// Fields
	__JniBaseClass TextInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.TextInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextInfo::TextInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextInfo::TextInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.view.textservice.TextInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	TextInfo::TextInfo(jstring arg0)
		: __JniBaseClass(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	TextInfo::TextInfo(jstring arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		) {}
	TextInfo::TextInfo(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: __JniBaseClass(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/CharSequence;IIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint TextInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextInfo::getCharSequence()
	{
		return callObjectMethod(
			"getCharSequence",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextInfo::getCookie()
	{
		return callMethod<jint>(
			"getCookie",
			"()I"
		);
	}
	jint TextInfo::getSequence()
	{
		return callMethod<jint>(
			"getSequence",
			"()I"
		);
	}
	jstring TextInfo::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice
