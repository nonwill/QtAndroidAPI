#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Person;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class Notification_MessagingStyle_Message : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_MessagingStyle_Message(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_MessagingStyle_Message(QJniObject obj);
		
		// Constructors
		Notification_MessagingStyle_Message(jstring arg0, jlong arg1, android::app::Person arg2);
		Notification_MessagingStyle_Message(jstring arg0, jlong arg1, jstring arg2);
		
		// Methods
		static JObject getMessagesFromBundleArray(jarray arg0);
		jstring getDataMimeType();
		android::net::Uri getDataUri();
		android::os::Bundle getExtras();
		jstring getSender();
		android::app::Person getSenderPerson();
		jstring getText();
		jlong getTimestamp();
		android::app::Notification_MessagingStyle_Message setData(jstring arg0, android::net::Uri arg1);
	};
} // namespace android::app

