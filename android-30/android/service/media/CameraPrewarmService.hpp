#pragma once

#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::service::media
{
	class CameraPrewarmService : public android::app::Service
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraPrewarmService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CameraPrewarmService(QAndroidJniObject obj);
		
		// Constructors
		CameraPrewarmService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		void onCooldown(jboolean arg0);
		void onPrewarm();
		jboolean onUnbind(android::content::Intent arg0);
	};
} // namespace android::service::media

