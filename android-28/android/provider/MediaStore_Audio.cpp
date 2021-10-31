#include "./MediaStore_Audio.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	MediaStore_Audio::MediaStore_Audio(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Audio::MediaStore_Audio()
		: __JniBaseClass(
			"android.provider.MediaStore$Audio",
			"()V"
		) {}
	
	// Methods
	jstring MediaStore_Audio::keyFor(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::provider

