#include "./TextKeyListener_Capitalize.hpp"

namespace android::text::method
{
	// Fields
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"CHARACTERS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"NONE",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::SENTENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"SENTENCES",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::WORDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"WORDS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	
	// QAndroidJniObject forward
	TextKeyListener_Capitalize::TextKeyListener_Capitalize(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/method/TextKeyListener$Capitalize;",
			arg0
		);
	}
	jarray TextKeyListener_Capitalize::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"values",
			"()[Landroid/text/method/TextKeyListener$Capitalize;"
		).object<jarray>();
	}
} // namespace android::text::method

