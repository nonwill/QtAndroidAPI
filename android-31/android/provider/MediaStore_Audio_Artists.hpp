#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Audio_Artists : public JObject
	{
	public:
		// Fields
		static JString CONTENT_TYPE();
		static JString DEFAULT_SORT_ORDER();
		static JString ENTRY_CONTENT_TYPE();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Artists(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Artists(QJniObject obj);
		
		// Constructors
		MediaStore_Audio_Artists();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0);
	};
} // namespace android::provider

