#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class ComponentName;
}
namespace android::nfc
{
	class NfcAdapter;
}

namespace android::nfc::cardemulation
{
	class NfcFCardEmulation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcFCardEmulation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcFCardEmulation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::cardemulation::NfcFCardEmulation getInstance(android::nfc::NfcAdapter arg0);
		jboolean disableService(android::app::Activity arg0);
		jboolean enableService(android::app::Activity arg0, android::content::ComponentName arg1);
		jstring getNfcid2ForService(android::content::ComponentName arg0);
		jstring getSystemCodeForService(android::content::ComponentName arg0);
		jboolean registerSystemCodeForService(android::content::ComponentName arg0, jstring arg1);
		jboolean setNfcid2ForService(android::content::ComponentName arg0, jstring arg1);
		jboolean unregisterSystemCodeForService(android::content::ComponentName arg0);
	};
} // namespace android::nfc::cardemulation

