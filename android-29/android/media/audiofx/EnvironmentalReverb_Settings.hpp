#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class EnvironmentalReverb_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort decayHFRatio();
		jint decayTime();
		jshort density();
		jshort diffusion();
		jint reflectionsDelay();
		jshort reflectionsLevel();
		jint reverbDelay();
		jshort reverbLevel();
		jshort roomHFLevel();
		jshort roomLevel();
		
		EnvironmentalReverb_Settings(QAndroidJniObject obj);
		// Constructors
		EnvironmentalReverb_Settings();
		EnvironmentalReverb_Settings(jstring &arg0);
		EnvironmentalReverb_Settings(const QString &arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

