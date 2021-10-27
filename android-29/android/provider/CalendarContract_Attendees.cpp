#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_Attendees.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_Attendees::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Attendees",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	CalendarContract_Attendees::CalendarContract_Attendees(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CalendarContract_Attendees::query(android::content::ContentResolver arg0, jlong arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$Attendees",
			"query",
			"(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::provider
