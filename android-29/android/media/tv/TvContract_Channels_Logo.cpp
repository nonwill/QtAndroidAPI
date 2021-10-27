#include "./TvContract_Channels_Logo.hpp"

namespace android::media::tv
{
	// Fields
	jstring TvContract_Channels_Logo::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels$Logo",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	TvContract_Channels_Logo::TvContract_Channels_Logo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::media::tv

