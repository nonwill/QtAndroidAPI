#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TextUtils_SimpleStringSplitter.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(jchar arg0)
		: JObject(
			"android.text.TextUtils$SimpleStringSplitter",
			"(C)V",
			arg0
		) {}
	
	// Methods
	jboolean TextUtils_SimpleStringSplitter::hasNext()
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	JObject TextUtils_SimpleStringSplitter::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JString TextUtils_SimpleStringSplitter::next()
	{
		return callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		);
	}
	void TextUtils_SimpleStringSplitter::remove()
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	void TextUtils_SimpleStringSplitter::setString(JString arg0)
	{
		callMethod<void>(
			"setString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

