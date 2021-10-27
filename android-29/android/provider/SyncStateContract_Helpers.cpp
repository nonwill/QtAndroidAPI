#include "../accounts/Account.hpp"
#include "../content/ContentProviderClient.hpp"
#include "../content/ContentProviderOperation.hpp"
#include "../net/Uri.hpp"
#include "../util/Pair.hpp"
#include "./SyncStateContract_Helpers.hpp"

namespace android::provider
{
	// Fields
	
	SyncStateContract_Helpers::SyncStateContract_Helpers(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncStateContract_Helpers::SyncStateContract_Helpers()
	{
		__thiz = QAndroidJniObject(
			"android.provider.SyncStateContract$Helpers",
			"()V"
		);
	}
	
	// Methods
	jbyteArray SyncStateContract_Helpers::get(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)[B",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jbyteArray>();
	}
	QAndroidJniObject SyncStateContract_Helpers::getWithUri(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SyncStateContract_Helpers::insert(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, jbyteArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"insert",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SyncStateContract_Helpers::newSetOperation(android::net::Uri arg0, android::accounts::Account arg1, jbyteArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"newSetOperation",
			"(Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject SyncStateContract_Helpers::newUpdateOperation(android::net::Uri arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"newUpdateOperation",
			"(Landroid/net/Uri;[B)Landroid/content/ContentProviderOperation;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SyncStateContract_Helpers::set(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, jbyteArray arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.SyncStateContract$Helpers",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void SyncStateContract_Helpers::update(android::content::ContentProviderClient arg0, android::net::Uri arg1, jbyteArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.SyncStateContract$Helpers",
			"update",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::provider

