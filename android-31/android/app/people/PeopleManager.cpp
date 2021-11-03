#include "./ConversationStatus.hpp"
#include "../../../JString.hpp"
#include "./PeopleManager.hpp"

namespace android::app::people
{
	// Fields
	
	// QAndroidJniObject forward
	PeopleManager::PeopleManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PeopleManager::addOrUpdateStatus(JString arg0, android::app::people::ConversationStatus arg1)
	{
		callMethod<void>(
			"addOrUpdateStatus",
			"(Ljava/lang/String;Landroid/app/people/ConversationStatus;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void PeopleManager::clearStatus(JString arg0, JString arg1)
	{
		callMethod<void>(
			"clearStatus",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void PeopleManager::clearStatuses(JString arg0)
	{
		callMethod<void>(
			"clearStatuses",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject PeopleManager::getStatuses(JString arg0)
	{
		return callObjectMethod(
			"getStatuses",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::people

