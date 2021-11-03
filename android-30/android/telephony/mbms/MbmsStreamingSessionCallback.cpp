#include "../../../JString.hpp"
#include "./MbmsStreamingSessionCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QAndroidJniObject forward
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback()
		: JObject(
			"android.telephony.mbms.MbmsStreamingSessionCallback",
			"()V"
		) {}
	
	// Methods
	void MbmsStreamingSessionCallback::onError(jint arg0, JString arg1)
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void MbmsStreamingSessionCallback::onMiddlewareReady()
	{
		callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
	void MbmsStreamingSessionCallback::onStreamingServicesUpdated(JObject arg0)
	{
		callMethod<void>(
			"onStreamingServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::mbms

