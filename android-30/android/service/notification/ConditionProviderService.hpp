#pragma once

#include "../../app/Service.hpp"

class JArray;
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::service::notification
{
	class Condition;
}
class JString;

namespace android::service::notification
{
	class ConditionProviderService : public android::app::Service
	{
	public:
		// Fields
		static JString EXTRA_RULE_ID();
		static JString META_DATA_CONFIGURATION_ACTIVITY();
		static JString META_DATA_RULE_INSTANCE_LIMIT();
		static JString META_DATA_RULE_TYPE();
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConditionProviderService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		ConditionProviderService(QJniObject obj);
		
		// Constructors
		ConditionProviderService();
		
		// Methods
		static void requestRebind(android::content::ComponentName arg0);
		void notifyCondition(android::service::notification::Condition arg0);
		void notifyConditions(JArray arg0);
		JObject onBind(android::content::Intent arg0);
		void onConnected();
		void onRequestConditions(jint arg0);
		void onSubscribe(android::net::Uri arg0);
		void onUnsubscribe(android::net::Uri arg0);
		void requestUnbind();
	};
} // namespace android::service::notification

