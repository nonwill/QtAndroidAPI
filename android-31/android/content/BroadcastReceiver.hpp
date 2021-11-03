#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class BroadcastReceiver_PendingResult;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::content
{
	class BroadcastReceiver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BroadcastReceiver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastReceiver(QAndroidJniObject obj);
		
		// Constructors
		BroadcastReceiver();
		
		// Methods
		void abortBroadcast();
		void clearAbortBroadcast();
		jboolean getAbortBroadcast();
		jboolean getDebugUnregister();
		jint getResultCode();
		JString getResultData();
		android::os::Bundle getResultExtras(jboolean arg0);
		android::content::BroadcastReceiver_PendingResult goAsync();
		jboolean isInitialStickyBroadcast();
		jboolean isOrderedBroadcast();
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		JObject peekService(android::content::Context arg0, android::content::Intent arg1);
		void setDebugUnregister(jboolean arg0);
		void setOrderedHint(jboolean arg0);
		void setResult(jint arg0, JString arg1, android::os::Bundle arg2);
		void setResultCode(jint arg0);
		void setResultData(JString arg0);
		void setResultExtras(android::os::Bundle arg0);
	};
} // namespace android::content

