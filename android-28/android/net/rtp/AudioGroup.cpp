#include "./AudioGroup.hpp"

namespace android::net::rtp
{
	// Fields
	jint AudioGroup::MODE_ECHO_SUPPRESSION()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_ECHO_SUPPRESSION"
		);
	}
	jint AudioGroup::MODE_MUTED()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_MUTED"
		);
	}
	jint AudioGroup::MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_NORMAL"
		);
	}
	jint AudioGroup::MODE_ON_HOLD()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_ON_HOLD"
		);
	}
	
	// QJniObject forward
	AudioGroup::AudioGroup(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioGroup::AudioGroup()
		: __JniBaseClass(
			"android.net.rtp.AudioGroup",
			"()V"
		) {}
	
	// Methods
	void AudioGroup::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint AudioGroup::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jarray AudioGroup::getStreams()
	{
		return callObjectMethod(
			"getStreams",
			"()[Landroid/net/rtp/AudioStream;"
		).object<jarray>();
	}
	void AudioGroup::sendDtmf(jint arg0)
	{
		callMethod<void>(
			"sendDtmf",
			"(I)V",
			arg0
		);
	}
	void AudioGroup::setMode(jint arg0)
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::rtp

