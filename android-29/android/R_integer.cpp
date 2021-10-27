#include "./R_integer.hpp"

namespace android
{
	// Fields
	jint R_integer::config_longAnimTime()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"config_longAnimTime"
		);
	}
	jint R_integer::config_mediumAnimTime()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"config_mediumAnimTime"
		);
	}
	jint R_integer::config_shortAnimTime()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"config_shortAnimTime"
		);
	}
	jint R_integer::status_bar_notification_info_maxnum()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$integer",
			"status_bar_notification_info_maxnum"
		);
	}
	
	R_integer::R_integer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_integer::R_integer()
	{
		__thiz = QAndroidJniObject(
			"android.R$integer",
			"()V"
		);
	}
	
	// Methods
} // namespace android
