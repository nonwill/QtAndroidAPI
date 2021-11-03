#include "../app/AlertDialog_Builder.hpp"
#include "../app/Dialog.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./DialogPreference.hpp"

namespace android::preference
{
	// Fields
	
	// QJniObject forward
	DialogPreference::DialogPreference(QJniObject obj) : android::preference::Preference(obj) {}
	
	// Constructors
	DialogPreference::DialogPreference(android::content::Context arg0)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	DialogPreference::DialogPreference(android::content::Context arg0, JObject arg1)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	DialogPreference::DialogPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	DialogPreference::DialogPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::app::Dialog DialogPreference::getDialog()
	{
		return callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	android::graphics::drawable::Drawable DialogPreference::getDialogIcon()
	{
		return callObjectMethod(
			"getDialogIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint DialogPreference::getDialogLayoutResource()
	{
		return callMethod<jint>(
			"getDialogLayoutResource",
			"()I"
		);
	}
	JString DialogPreference::getDialogMessage()
	{
		return callObjectMethod(
			"getDialogMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString DialogPreference::getDialogTitle()
	{
		return callObjectMethod(
			"getDialogTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString DialogPreference::getNegativeButtonText()
	{
		return callObjectMethod(
			"getNegativeButtonText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString DialogPreference::getPositiveButtonText()
	{
		return callObjectMethod(
			"getPositiveButtonText",
			"()Ljava/lang/CharSequence;"
		);
	}
	void DialogPreference::onActivityDestroy()
	{
		callMethod<void>(
			"onActivityDestroy",
			"()V"
		);
	}
	void DialogPreference::onClick(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	void DialogPreference::onDismiss(JObject arg0)
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	void DialogPreference::setDialogIcon(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setDialogIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void DialogPreference::setDialogIcon(jint arg0)
	{
		callMethod<void>(
			"setDialogIcon",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogLayoutResource(jint arg0)
	{
		callMethod<void>(
			"setDialogLayoutResource",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogMessage(jint arg0)
	{
		callMethod<void>(
			"setDialogMessage",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogMessage(JString arg0)
	{
		callMethod<void>(
			"setDialogMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void DialogPreference::setDialogTitle(jint arg0)
	{
		callMethod<void>(
			"setDialogTitle",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogTitle(JString arg0)
	{
		callMethod<void>(
			"setDialogTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void DialogPreference::setNegativeButtonText(jint arg0)
	{
		callMethod<void>(
			"setNegativeButtonText",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setNegativeButtonText(JString arg0)
	{
		callMethod<void>(
			"setNegativeButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void DialogPreference::setPositiveButtonText(jint arg0)
	{
		callMethod<void>(
			"setPositiveButtonText",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setPositiveButtonText(JString arg0)
	{
		callMethod<void>(
			"setPositiveButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::preference

