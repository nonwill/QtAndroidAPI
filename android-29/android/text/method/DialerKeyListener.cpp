#include "../../view/KeyEvent.hpp"
#include "./DialerKeyListener.hpp"

namespace android::text::method
{
	// Fields
	jcharArray DialerKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.DialerKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	// QAndroidJniObject forward
	DialerKeyListener::DialerKeyListener(QAndroidJniObject obj) : android::text::method::NumberKeyListener(obj) {}
	
	// Constructors
	DialerKeyListener::DialerKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DialerKeyListener",
			"()V"
		) {}
	
	// Methods
	android::text::method::DialerKeyListener DialerKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DialerKeyListener",
			"getInstance",
			"()Landroid/text/method/DialerKeyListener;"
		);
	}
	jint DialerKeyListener::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

