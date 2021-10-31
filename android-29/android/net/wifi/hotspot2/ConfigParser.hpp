#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}

namespace android::net::wifi::hotspot2
{
	class ConfigParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfigParser(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConfigParser(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::hotspot2::PasspointConfiguration parsePasspointConfig(jstring arg0, jbyteArray arg1);
	};
} // namespace android::net::wifi::hotspot2

