#include "../accounts/Account.hpp"
#include "../content/ContentProviderClient.hpp"
#include "../content/ContentProviderOperation.hpp"
#include "../net/Uri.hpp"
#include "../util/Pair.hpp"
#include "./ContactsContract_ProfileSyncState.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_ProfileSyncState::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_ProfileSyncState::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	ContactsContract_ProfileSyncState::ContactsContract_ProfileSyncState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyteArray ContactsContract_ProfileSyncState::get(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jbyteArray>();
	}
	QAndroidJniObject ContactsContract_ProfileSyncState::getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ContactsContract_ProfileSyncState::newSetOperation(android::accounts::Account arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"newSetOperation",
			"(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContactsContract_ProfileSyncState::set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, jbyteArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$ProfileSyncState",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::provider
