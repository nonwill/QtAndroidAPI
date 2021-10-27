#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class RemoteAction;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class ConversationAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring TYPE_CALL_PHONE();
		static jstring TYPE_CREATE_REMINDER();
		static jstring TYPE_OPEN_URL();
		static jstring TYPE_SEND_EMAIL();
		static jstring TYPE_SEND_SMS();
		static jstring TYPE_SHARE_LOCATION();
		static jstring TYPE_TEXT_REPLY();
		static jstring TYPE_TRACK_FLIGHT();
		static jstring TYPE_VIEW_CALENDAR();
		static jstring TYPE_VIEW_MAP();
		
		ConversationAction(QAndroidJniObject obj);
		// Constructors
		ConversationAction() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAction();
		jfloat getConfidenceScore();
		QAndroidJniObject getExtras();
		jstring getTextReply();
		jstring getType();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

