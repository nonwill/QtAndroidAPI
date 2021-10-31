#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class IsoDep : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IsoDep(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IsoDep(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::IsoDep get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getHiLayerResponse();
		jbyteArray getHistoricalBytes();
		jint getMaxTransceiveLength();
		android::nfc::Tag getTag();
		jint getTimeout();
		jboolean isConnected();
		jboolean isExtendedLengthApduSupported();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

