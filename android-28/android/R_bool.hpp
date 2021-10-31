#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_bool : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_bool(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_bool(QAndroidJniObject obj);
		
		// Constructors
		R_bool();
		
		// Methods
	};
} // namespace android

