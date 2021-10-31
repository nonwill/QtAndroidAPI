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
	class PersistableBundle;
}
namespace android::service::carrier
{
	class CarrierIdentifier;
}

namespace android::service::carrier
{
	class CarrierService : public android::app::Service
	{
	public:
		// Fields
		static jstring CARRIER_SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CarrierService(QAndroidJniObject obj);
		
		// Constructors
		CarrierService();
		
		// Methods
		void notifyCarrierNetworkChange(jboolean arg0);
		__JniBaseClass onBind(android::content::Intent arg0);
		android::os::PersistableBundle onLoadConfig(android::service::carrier::CarrierIdentifier arg0);
	};
} // namespace android::service::carrier
