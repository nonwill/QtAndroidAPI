#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::service::autofill
{
	class FillCallback;
}
namespace android::service::autofill
{
	class FillEventHistory;
}
namespace android::service::autofill
{
	class FillRequest;
}
namespace android::service::autofill
{
	class SaveCallback;
}
namespace android::service::autofill
{
	class SaveRequest;
}

namespace android::service::autofill
{
	class AutofillService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutofillService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		AutofillService(QAndroidJniObject obj);
		
		// Constructors
		AutofillService();
		
		// Methods
		android::service::autofill::FillEventHistory getFillEventHistory();
		__JniBaseClass onBind(android::content::Intent arg0);
		void onConnected();
		void onCreate();
		void onDisconnected();
		void onFillRequest(android::service::autofill::FillRequest arg0, android::os::CancellationSignal arg1, android::service::autofill::FillCallback arg2);
		void onSaveRequest(android::service::autofill::SaveRequest arg0, android::service::autofill::SaveCallback arg1);
	};
} // namespace android::service::autofill
