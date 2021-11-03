#include "../../JByteArray.hpp"
#include "../content/Context.hpp"
#include "./ConfirmationCallback.hpp"
#include "../../JString.hpp"
#include "./ConfirmationPrompt.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	ConfirmationPrompt::ConfirmationPrompt(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ConfirmationPrompt::isSupported(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.ConfirmationPrompt",
			"isSupported",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	void ConfirmationPrompt::cancelPrompt()
	{
		callMethod<void>(
			"cancelPrompt",
			"()V"
		);
	}
	void ConfirmationPrompt::presentPrompt(JObject arg0, android::security::ConfirmationCallback arg1)
	{
		callMethod<void>(
			"presentPrompt",
			"(Ljava/util/concurrent/Executor;Landroid/security/ConfirmationCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::security

