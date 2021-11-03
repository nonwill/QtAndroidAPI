#include "../../JArray.hpp"
#include "../net/Uri.hpp"
#include "./FontsContract_FontInfo.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	FontsContract_FontInfo::FontsContract_FontInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray FontsContract_FontInfo::getAxes()
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		);
	}
	jint FontsContract_FontInfo::getResultCode()
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jint FontsContract_FontInfo::getTtcIndex()
	{
		return callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	android::net::Uri FontsContract_FontInfo::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint FontsContract_FontInfo::getWeight()
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jboolean FontsContract_FontInfo::isItalic()
	{
		return callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::provider

