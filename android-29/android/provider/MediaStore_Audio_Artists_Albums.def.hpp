#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Audio_Artists_Albums : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Artists_Albums(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Artists_Albums(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaStore_Audio_Artists_Albums();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0, jlong arg1);
	};
} // namespace android::provider
