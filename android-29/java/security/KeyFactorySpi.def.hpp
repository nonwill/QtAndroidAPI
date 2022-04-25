#pragma once

#include "../../JObject.hpp"

class JClass;

namespace java::security
{
	class KeyFactorySpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyFactorySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactorySpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyFactorySpi();
		
		// Methods
	};
} // namespace java::security
