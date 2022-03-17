#pragma once

#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../util/BitSet.def.hpp"
#include "./URLEncoder.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString URLEncoder::encode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString URLEncoder::encode(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString URLEncoder::encode(JString arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
