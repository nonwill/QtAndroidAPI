#include "../../app/RemoteAction.hpp"
#include "../../os/Bundle.hpp"
#include "./ConversationAction.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ConversationAction_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	ConversationAction_Builder::ConversationAction_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConversationAction_Builder::ConversationAction_Builder(JString arg0)
		: JObject(
			"android.view.textclassifier.ConversationAction$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::view::textclassifier::ConversationAction ConversationAction_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationAction;"
		);
	}
	android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setAction(android::app::RemoteAction arg0)
	{
		return callObjectMethod(
			"setAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setConfidenceScore(jfloat arg0)
	{
		return callObjectMethod(
			"setConfidenceScore",
			"(F)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0
		);
	}
	android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setTextReply(JString arg0)
	{
		return callObjectMethod(
			"setTextReply",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

