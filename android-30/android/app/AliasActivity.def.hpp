#pragma once

#include "./Activity.def.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class AliasActivity : public android::app::Activity
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AliasActivity(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		AliasActivity(QAndroidJniObject obj) : android::app::Activity(obj) {}
		
		// Constructors
		AliasActivity();
		
		// Methods
	};
} // namespace android::app
