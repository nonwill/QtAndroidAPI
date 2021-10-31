#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_AuthAlgorithm : public __JniBaseClass
	{
	public:
		// Fields
		static jint LEAP();
		static jint OPEN();
		static jint SHARED();
		static jarray strings();
		static jstring varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_AuthAlgorithm(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_AuthAlgorithm(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

