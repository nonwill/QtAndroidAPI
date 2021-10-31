#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcBarcode : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_KOVIO();
		static jint TYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcBarcode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcBarcode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcBarcode get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getBarcode();
		android::nfc::Tag getTag();
		jint getType();
		jboolean isConnected();
	};
} // namespace android::nfc::tech
