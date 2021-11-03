#include "./TvInputInfo.hpp"
#include "../../../JString.hpp"
#include "./TvInputManager_TvInputCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvInputManager_TvInputCallback::TvInputManager_TvInputCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvInputManager_TvInputCallback::TvInputManager_TvInputCallback()
		: JObject(
			"android.media.tv.TvInputManager$TvInputCallback",
			"()V"
		) {}
	
	// Methods
	void TvInputManager_TvInputCallback::onInputAdded(JString arg0)
	{
		callMethod<void>(
			"onInputAdded",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvInputManager_TvInputCallback::onInputRemoved(JString arg0)
	{
		callMethod<void>(
			"onInputRemoved",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvInputManager_TvInputCallback::onInputStateChanged(JString arg0, jint arg1)
	{
		callMethod<void>(
			"onInputStateChanged",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void TvInputManager_TvInputCallback::onInputUpdated(JString arg0)
	{
		callMethod<void>(
			"onInputUpdated",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvInputManager_TvInputCallback::onTvInputInfoUpdated(android::media::tv::TvInputInfo arg0)
	{
		callMethod<void>(
			"onTvInputInfoUpdated",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv

