#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::security
{
	class NetworkSecurityPolicy : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkSecurityPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSecurityPolicy(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::security::NetworkSecurityPolicy getInstance();
		jboolean isCleartextTrafficPermitted() const;
		jboolean isCleartextTrafficPermitted(JString arg0) const;
	};
} // namespace android::security
