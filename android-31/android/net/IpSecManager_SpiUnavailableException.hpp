#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::net
{
	class IpSecManager_SpiUnavailableException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecManager_SpiUnavailableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_SpiUnavailableException(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getSpi();
	};
} // namespace android::net

