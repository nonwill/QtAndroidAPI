#include "./ContactsContract_Intents_Insert.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Intents_Insert::ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::COMPANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"COMPANY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EMAIL_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EMAIL_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EXTRA_ACCOUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EXTRA_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EXTRA_DATA_SET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EXTRA_DATA_SET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::FULL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"FULL_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::IM_HANDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"IM_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::IM_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"IM_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::IM_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"IM_PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::JOB_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"JOB_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::NOTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"NOTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONETIC_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONETIC_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONE_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONE_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::POSTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"POSTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::POSTAL_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"POSTAL_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::POSTAL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"POSTAL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_PHONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_PHONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ContactsContract_Intents_Insert::ContactsContract_Intents_Insert(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContactsContract_Intents_Insert::ContactsContract_Intents_Insert()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Intents$Insert",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

