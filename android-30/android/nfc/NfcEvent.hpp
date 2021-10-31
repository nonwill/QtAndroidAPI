#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::nfc
{
	class NfcAdapter;
}

namespace android::nfc
{
	class NfcEvent : public __JniBaseClass
	{
	public:
		// Fields
		android::nfc::NfcAdapter nfcAdapter();
		jint peerLlcpMajorVersion();
		jint peerLlcpMinorVersion();
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::nfc

