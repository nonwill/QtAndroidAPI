#include "./ControlButton.hpp"
#include "./RangeTemplate.hpp"
#include "./ToggleRangeTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// QJniObject forward
	ToggleRangeTemplate::ToggleRangeTemplate(QJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	ToggleRangeTemplate::ToggleRangeTemplate(jstring arg0, android::service::controls::templates::ControlButton arg1, android::service::controls::templates::RangeTemplate arg2)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ToggleRangeTemplate",
			"(Ljava/lang/String;Landroid/service/controls/templates/ControlButton;Landroid/service/controls/templates/RangeTemplate;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	ToggleRangeTemplate::ToggleRangeTemplate(jstring arg0, jboolean arg1, jstring arg2, android::service::controls::templates::RangeTemplate arg3)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ToggleRangeTemplate",
			"(Ljava/lang/String;ZLjava/lang/CharSequence;Landroid/service/controls/templates/RangeTemplate;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	jstring ToggleRangeTemplate::getActionDescription()
	{
		return callObjectMethod(
			"getActionDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::service::controls::templates::RangeTemplate ToggleRangeTemplate::getRange()
	{
		return callObjectMethod(
			"getRange",
			"()Landroid/service/controls/templates/RangeTemplate;"
		);
	}
	jint ToggleRangeTemplate::getTemplateType()
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	jboolean ToggleRangeTemplate::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

