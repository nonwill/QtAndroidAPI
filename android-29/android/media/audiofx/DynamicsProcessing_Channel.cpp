#include "./DynamicsProcessing_Eq.hpp"
#include "./DynamicsProcessing_EqBand.hpp"
#include "./DynamicsProcessing_Limiter.hpp"
#include "./DynamicsProcessing_Mbc.hpp"
#include "./DynamicsProcessing_MbcBand.hpp"
#include "./DynamicsProcessing_Channel.hpp"

namespace android::media::audiofx
{
	// Fields
	
	DynamicsProcessing_Channel::DynamicsProcessing_Channel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicsProcessing_Channel::DynamicsProcessing_Channel(android::media::audiofx::DynamicsProcessing_Channel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Channel",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.__jniObject().object()
		);
	}
	DynamicsProcessing_Channel::DynamicsProcessing_Channel(jfloat &arg0, jboolean &arg1, jint &arg2, jboolean &arg3, jint &arg4, jboolean &arg5, jint &arg6, jboolean &arg7)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Channel",
			"(FZIZIZIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	
	// Methods
	jfloat DynamicsProcessing_Channel::getInputGain()
	{
		return __thiz.callMethod<jfloat>(
			"getInputGain",
			"()F"
		);
	}
	QAndroidJniObject DynamicsProcessing_Channel::getLimiter()
	{
		return __thiz.callObjectMethod(
			"getLimiter",
			"()Landroid/media/audiofx/DynamicsProcessing$Limiter;"
		);
	}
	QAndroidJniObject DynamicsProcessing_Channel::getMbc()
	{
		return __thiz.callObjectMethod(
			"getMbc",
			"()Landroid/media/audiofx/DynamicsProcessing$Mbc;"
		);
	}
	QAndroidJniObject DynamicsProcessing_Channel::getMbcBand(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMbcBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing_Channel::getPostEq()
	{
		return __thiz.callObjectMethod(
			"getPostEq",
			"()Landroid/media/audiofx/DynamicsProcessing$Eq;"
		);
	}
	QAndroidJniObject DynamicsProcessing_Channel::getPostEqBand(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPostEqBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing_Channel::getPreEq()
	{
		return __thiz.callObjectMethod(
			"getPreEq",
			"()Landroid/media/audiofx/DynamicsProcessing$Eq;"
		);
	}
	QAndroidJniObject DynamicsProcessing_Channel::getPreEqBand(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPreEqBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	void DynamicsProcessing_Channel::setInputGain(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setInputGain",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Channel::setLimiter(android::media::audiofx::DynamicsProcessing_Limiter arg0)
	{
		__thiz.callMethod<void>(
			"setLimiter",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Channel::setMbc(android::media::audiofx::DynamicsProcessing_Mbc arg0)
	{
		__thiz.callMethod<void>(
			"setMbc",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Channel::setMbcBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1)
	{
		__thiz.callMethod<void>(
			"setMbcBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Channel::setPostEq(android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		__thiz.callMethod<void>(
			"setPostEq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Channel::setPostEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		__thiz.callMethod<void>(
			"setPostEqBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Channel::setPreEq(android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		__thiz.callMethod<void>(
			"setPreEq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Channel::setPreEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		__thiz.callMethod<void>(
			"setPreEqBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jstring DynamicsProcessing_Channel::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx
