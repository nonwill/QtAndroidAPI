#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Genres : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Genres(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Genres(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio_Genres();
		
		// Methods
		static android::net::Uri getContentUri(jstring arg0);
		static android::net::Uri getContentUriForAudioId(jstring arg0, jint arg1);
	};
} // namespace android::provider
