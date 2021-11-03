#pragma once

#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_MessagingStyle_Message;
}
namespace android::app
{
	class Person;
}
class JString;

namespace android::app
{
	class Notification_MessagingStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		static jint MAXIMUM_RETAINED_MESSAGES();
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_MessagingStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_MessagingStyle(QJniObject obj);
		
		// Constructors
		Notification_MessagingStyle(android::app::Person arg0);
		Notification_MessagingStyle(JString arg0);
		
		// Methods
		android::app::Notification_MessagingStyle addHistoricMessage(android::app::Notification_MessagingStyle_Message arg0);
		android::app::Notification_MessagingStyle addMessage(android::app::Notification_MessagingStyle_Message arg0);
		android::app::Notification_MessagingStyle addMessage(JString arg0, jlong arg1, android::app::Person arg2);
		android::app::Notification_MessagingStyle addMessage(JString arg0, jlong arg1, JString arg2);
		JString getConversationTitle();
		JObject getHistoricMessages();
		JObject getMessages();
		android::app::Person getUser();
		JString getUserDisplayName();
		jboolean isGroupConversation();
		android::app::Notification_MessagingStyle setConversationTitle(JString arg0);
		android::app::Notification_MessagingStyle setGroupConversation(jboolean arg0);
	};
} // namespace android::app

