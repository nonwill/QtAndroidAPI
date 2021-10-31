#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_Protocol : public __JniBaseClass
	{
	public:
		// Fields
		static jint RSN();
		static jint WAPI();
		static jint WPA();
		static jarray strings();
		static jstring varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_Protocol(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_Protocol(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

