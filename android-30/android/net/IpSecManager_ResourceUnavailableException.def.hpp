#pragma once

#include "../util/AndroidException.def.hpp"

namespace android::net
{
	class IpSecManager_ResourceUnavailableException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecManager_ResourceUnavailableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_ResourceUnavailableException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

