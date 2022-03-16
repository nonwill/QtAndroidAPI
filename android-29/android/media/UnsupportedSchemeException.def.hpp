#pragma once

#include "./MediaDrmException.def.hpp"

class JString;

namespace android::media
{
	class UnsupportedSchemeException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedSchemeException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedSchemeException(QJniObject obj) : android::media::MediaDrmException(obj) {}
		
		// Constructors
		UnsupportedSchemeException(JString arg0);
		
		// Methods
	};
} // namespace android::media

