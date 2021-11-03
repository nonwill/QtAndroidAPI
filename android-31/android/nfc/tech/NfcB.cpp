#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcB.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QAndroidJniObject forward
	NfcB::NfcB(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::NfcB NfcB::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcB",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcB;",
			arg0.object()
		);
	}
	void NfcB::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcB::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray NfcB::getApplicationData()
	{
		return callObjectMethod(
			"getApplicationData",
			"()[B"
		);
	}
	jint NfcB::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	JByteArray NfcB::getProtocolInfo()
	{
		return callObjectMethod(
			"getProtocolInfo",
			"()[B"
		);
	}
	android::nfc::Tag NfcB::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcB::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	JByteArray NfcB::transceive(JByteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

