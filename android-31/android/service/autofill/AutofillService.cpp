#include "../../content/Intent.hpp"
#include "../../os/CancellationSignal.hpp"
#include "./FillCallback.hpp"
#include "./FillEventHistory.hpp"
#include "./FillRequest.hpp"
#include "./SaveCallback.hpp"
#include "./SaveRequest.hpp"
#include "../../../JString.hpp"
#include "./AutofillService.hpp"

namespace android::service::autofill
{
	// Fields
	JString AutofillService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString AutofillService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	AutofillService::AutofillService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	AutofillService::AutofillService()
		: android::app::Service(
			"android.service.autofill.AutofillService",
			"()V"
		) {}
	
	// Methods
	android::service::autofill::FillEventHistory AutofillService::getFillEventHistory()
	{
		return callObjectMethod(
			"getFillEventHistory",
			"()Landroid/service/autofill/FillEventHistory;"
		);
	}
	JObject AutofillService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void AutofillService::onConnected()
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void AutofillService::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void AutofillService::onDisconnected()
	{
		callMethod<void>(
			"onDisconnected",
			"()V"
		);
	}
	void AutofillService::onFillRequest(android::service::autofill::FillRequest arg0, android::os::CancellationSignal arg1, android::service::autofill::FillCallback arg2)
	{
		callMethod<void>(
			"onFillRequest",
			"(Landroid/service/autofill/FillRequest;Landroid/os/CancellationSignal;Landroid/service/autofill/FillCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void AutofillService::onSaveRequest(android::service::autofill::SaveRequest arg0, android::service::autofill::SaveCallback arg1)
	{
		callMethod<void>(
			"onSaveRequest",
			"(Landroid/service/autofill/SaveRequest;Landroid/service/autofill/SaveCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AutofillService::onSavedDatasetsInfoRequest(JObject arg0)
	{
		callMethod<void>(
			"onSavedDatasetsInfoRequest",
			"(Landroid/service/autofill/SavedDatasetsInfoCallback;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

