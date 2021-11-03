#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.hpp"
#include "./AudioPresentation.hpp"

namespace android::media
{
	// Fields
	jint AudioPresentation::CONTENT_COMMENTARY()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_COMMENTARY"
		);
	}
	jint AudioPresentation::CONTENT_DIALOG()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_DIALOG"
		);
	}
	jint AudioPresentation::CONTENT_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_EMERGENCY"
		);
	}
	jint AudioPresentation::CONTENT_HEARING_IMPAIRED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_HEARING_IMPAIRED"
		);
	}
	jint AudioPresentation::CONTENT_MAIN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_MAIN"
		);
	}
	jint AudioPresentation::CONTENT_MUSIC_AND_EFFECTS()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_MUSIC_AND_EFFECTS"
		);
	}
	jint AudioPresentation::CONTENT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_UNKNOWN"
		);
	}
	jint AudioPresentation::CONTENT_VISUALLY_IMPAIRED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_VISUALLY_IMPAIRED"
		);
	}
	jint AudioPresentation::CONTENT_VOICEOVER()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_VOICEOVER"
		);
	}
	jint AudioPresentation::MASTERED_FOR_3D()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_3D"
		);
	}
	jint AudioPresentation::MASTERED_FOR_HEADPHONE()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_HEADPHONE"
		);
	}
	jint AudioPresentation::MASTERED_FOR_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_STEREO"
		);
	}
	jint AudioPresentation::MASTERED_FOR_SURROUND()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_SURROUND"
		);
	}
	jint AudioPresentation::MASTERING_NOT_INDICATED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERING_NOT_INDICATED"
		);
	}
	
	// QAndroidJniObject forward
	AudioPresentation::AudioPresentation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioPresentation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AudioPresentation::getLabels() const
	{
		return callObjectMethod(
			"getLabels",
			"()Ljava/util/Map;"
		);
	}
	java::util::Locale AudioPresentation::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jint AudioPresentation::getMasteringIndication() const
	{
		return callMethod<jint>(
			"getMasteringIndication",
			"()I"
		);
	}
	jint AudioPresentation::getPresentationId() const
	{
		return callMethod<jint>(
			"getPresentationId",
			"()I"
		);
	}
	jint AudioPresentation::getProgramId() const
	{
		return callMethod<jint>(
			"getProgramId",
			"()I"
		);
	}
	jboolean AudioPresentation::hasAudioDescription() const
	{
		return callMethod<jboolean>(
			"hasAudioDescription",
			"()Z"
		);
	}
	jboolean AudioPresentation::hasDialogueEnhancement() const
	{
		return callMethod<jboolean>(
			"hasDialogueEnhancement",
			"()Z"
		);
	}
	jboolean AudioPresentation::hasSpokenSubtitles() const
	{
		return callMethod<jboolean>(
			"hasSpokenSubtitles",
			"()Z"
		);
	}
	jint AudioPresentation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AudioPresentation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

