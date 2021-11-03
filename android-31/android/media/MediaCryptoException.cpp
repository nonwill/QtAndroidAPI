#include "../../JString.hpp"
#include "./MediaCryptoException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCryptoException::MediaCryptoException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	MediaCryptoException::MediaCryptoException(JString arg0)
		: java::lang::Exception(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

