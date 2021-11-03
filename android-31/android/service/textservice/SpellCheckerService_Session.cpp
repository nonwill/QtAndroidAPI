#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Bundle.hpp"
#include "../../view/textservice/SuggestionsInfo.hpp"
#include "../../view/textservice/TextInfo.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerService_Session.hpp"

namespace android::service::textservice
{
	// Fields
	
	// QJniObject forward
	SpellCheckerService_Session::SpellCheckerService_Session(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SpellCheckerService_Session::SpellCheckerService_Session()
		: JObject(
			"android.service.textservice.SpellCheckerService$Session",
			"()V"
		) {}
	
	// Methods
	android::os::Bundle SpellCheckerService_Session::getBundle()
	{
		return callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	JString SpellCheckerService_Session::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	jint SpellCheckerService_Session::getSupportedAttributes()
	{
		return callMethod<jint>(
			"getSupportedAttributes",
			"()I"
		);
	}
	void SpellCheckerService_Session::onCancel()
	{
		callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	void SpellCheckerService_Session::onClose()
	{
		callMethod<void>(
			"onClose",
			"()V"
		);
	}
	void SpellCheckerService_Session::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	JArray SpellCheckerService_Session::onGetSentenceSuggestionsMultiple(JArray arg0, jint arg1)
	{
		return callObjectMethod(
			"onGetSentenceSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;I)[Landroid/view/textservice/SentenceSuggestionsInfo;",
			arg0.object<jarray>(),
			arg1
		);
	}
	android::view::textservice::SuggestionsInfo SpellCheckerService_Session::onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1)
	{
		return callObjectMethod(
			"onGetSuggestions",
			"(Landroid/view/textservice/TextInfo;I)Landroid/view/textservice/SuggestionsInfo;",
			arg0.object(),
			arg1
		);
	}
	JArray SpellCheckerService_Session::onGetSuggestionsMultiple(JArray arg0, jint arg1, jboolean arg2)
	{
		return callObjectMethod(
			"onGetSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;IZ)[Landroid/view/textservice/SuggestionsInfo;",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
} // namespace android::service::textservice

