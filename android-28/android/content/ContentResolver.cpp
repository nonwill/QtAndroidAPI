#include "../accounts/Account.hpp"
#include "./ContentProviderClient.hpp"
#include "./ContentValues.hpp"
#include "./Context.hpp"
#include "./SyncInfo.hpp"
#include "./SyncRequest.hpp"
#include "./res/AssetFileDescriptor.hpp"
#include "../database/ContentObserver.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./ContentResolver.hpp"

namespace android::content
{
	// Fields
	jstring ContentResolver::ANY_CURSOR_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"ANY_CURSOR_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::CURSOR_DIR_BASE_TYPE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"CURSOR_DIR_BASE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::CURSOR_ITEM_BASE_TYPE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"CURSOR_ITEM_BASE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_HONORED_ARGS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_HONORED_ARGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_REFRESH_SUPPORTED()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_REFRESH_SUPPORTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_SIZE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_TOTAL_COUNT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_TOTAL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentResolver::NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS"
		);
	}
	jint ContentResolver::NOTIFY_SYNC_TO_NETWORK()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_SYNC_TO_NETWORK"
		);
	}
	jstring ContentResolver::QUERY_ARG_LIMIT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_OFFSET()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_OFFSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SORT_COLLATION()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_COLLATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SORT_COLUMNS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_COLUMNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SORT_DIRECTION()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_DIRECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SQL_SELECTION()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SELECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SQL_SELECTION_ARGS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SELECTION_ARGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SQL_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentResolver::QUERY_SORT_DIRECTION_ASCENDING()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"QUERY_SORT_DIRECTION_ASCENDING"
		);
	}
	jint ContentResolver::QUERY_SORT_DIRECTION_DESCENDING()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"QUERY_SORT_DIRECTION_DESCENDING"
		);
	}
	jstring ContentResolver::SCHEME_ANDROID_RESOURCE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_ANDROID_RESOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SCHEME_CONTENT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_CONTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SCHEME_FILE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_FILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_ACCOUNT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_DO_NOT_RETRY()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_DO_NOT_RETRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_EXPEDITED()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_EXPEDITED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_FORCE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_FORCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_IGNORE_BACKOFF()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_IGNORE_BACKOFF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_IGNORE_SETTINGS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_IGNORE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_INITIALIZE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_INITIALIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_MANUAL()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_MANUAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_REQUIRE_CHARGING()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_REQUIRE_CHARGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_UPLOAD()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_UPLOAD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentResolver::SYNC_OBSERVER_TYPE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_ACTIVE"
		);
	}
	jint ContentResolver::SYNC_OBSERVER_TYPE_PENDING()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_PENDING"
		);
	}
	jint ContentResolver::SYNC_OBSERVER_TYPE_SETTINGS()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_SETTINGS"
		);
	}
	
	// QJniObject forward
	ContentResolver::ContentResolver(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContentResolver::ContentResolver(android::content::Context arg0)
		: __JniBaseClass(
			"android.content.ContentResolver",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void ContentResolver::addPeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jlong arg3)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"addPeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	jobject ContentResolver::addStatusChangeListener(jint arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"addStatusChangeListener",
			"(ILandroid/content/SyncStatusObserver;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	void ContentResolver::cancelSync(android::content::SyncRequest arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"cancelSync",
			"(Landroid/content/SyncRequest;)V",
			arg0.object()
		);
	}
	void ContentResolver::cancelSync(android::accounts::Account arg0, jstring arg1)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"cancelSync",
			"(Landroid/accounts/Account;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	android::content::SyncInfo ContentResolver::getCurrentSync()
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getCurrentSync",
			"()Landroid/content/SyncInfo;"
		);
	}
	__JniBaseClass ContentResolver::getCurrentSyncs()
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getCurrentSyncs",
			"()Ljava/util/List;"
		);
	}
	jint ContentResolver::getIsSyncable(android::accounts::Account arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.content.ContentResolver",
			"getIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;)I",
			arg0.object(),
			arg1
		);
	}
	jboolean ContentResolver::getMasterSyncAutomatically()
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"getMasterSyncAutomatically",
			"()Z"
		);
	}
	__JniBaseClass ContentResolver::getPeriodicSyncs(android::accounts::Account arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getPeriodicSyncs",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	jarray ContentResolver::getSyncAdapterTypes()
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getSyncAdapterTypes",
			"()[Landroid/content/SyncAdapterType;"
		).object<jarray>();
	}
	jboolean ContentResolver::getSyncAutomatically(android::accounts::Account arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"getSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean ContentResolver::isSyncActive(android::accounts::Account arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncActive",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean ContentResolver::isSyncPending(android::accounts::Account arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncPending",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	void ContentResolver::removePeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"removePeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void ContentResolver::removeStatusChangeListener(jobject arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"removeStatusChangeListener",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ContentResolver::requestSync(android::content::SyncRequest arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"requestSync",
			"(Landroid/content/SyncRequest;)V",
			arg0.object()
		);
	}
	void ContentResolver::requestSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"requestSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void ContentResolver::setIsSyncable(android::accounts::Account arg0, jstring arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"setIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;I)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ContentResolver::setMasterSyncAutomatically(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"setMasterSyncAutomatically",
			"(Z)V",
			arg0
		);
	}
	void ContentResolver::setSyncAutomatically(android::accounts::Account arg0, jstring arg1, jboolean arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"setSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ContentResolver::validateSyncExtrasBundle(android::os::Bundle arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"validateSyncExtrasBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::content::ContentProviderClient ContentResolver::acquireContentProviderClient(android::net::Uri arg0)
	{
		return callObjectMethod(
			"acquireContentProviderClient",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderClient;",
			arg0.object()
		);
	}
	android::content::ContentProviderClient ContentResolver::acquireContentProviderClient(jstring arg0)
	{
		return callObjectMethod(
			"acquireContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			arg0
		);
	}
	android::content::ContentProviderClient ContentResolver::acquireUnstableContentProviderClient(android::net::Uri arg0)
	{
		return callObjectMethod(
			"acquireUnstableContentProviderClient",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderClient;",
			arg0.object()
		);
	}
	android::content::ContentProviderClient ContentResolver::acquireUnstableContentProviderClient(jstring arg0)
	{
		return callObjectMethod(
			"acquireUnstableContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			arg0
		);
	}
	jarray ContentResolver::applyBatch(jstring arg0, java::util::ArrayList arg1)
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0,
			arg1.object()
		).object<jarray>();
	}
	jint ContentResolver::bulkInsert(android::net::Uri arg0, jarray arg1)
	{
		return callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.object(),
			arg1
		);
	}
	android::os::Bundle ContentResolver::call(android::net::Uri arg0, jstring arg1, jstring arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"call",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void ContentResolver::cancelSync(android::net::Uri arg0)
	{
		callMethod<void>(
			"cancelSync",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	android::net::Uri ContentResolver::canonicalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	jint ContentResolver::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass ContentResolver::getOutgoingPersistedUriPermissions()
	{
		return callObjectMethod(
			"getOutgoingPersistedUriPermissions",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ContentResolver::getPersistedUriPermissions()
	{
		return callObjectMethod(
			"getPersistedUriPermissions",
			"()Ljava/util/List;"
		);
	}
	jarray ContentResolver::getStreamTypes(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jarray>();
	}
	jstring ContentResolver::getType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	android::net::Uri ContentResolver::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	void ContentResolver::notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1)
	{
		callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContentResolver::notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jboolean arg2)
	{
		callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ContentResolver::notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jint arg2)
	{
		callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::content::res::AssetFileDescriptor ContentResolver::openAssetFileDescriptor(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::content::res::AssetFileDescriptor ContentResolver::openAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor ContentResolver::openFileDescriptor(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::os::ParcelFileDescriptor ContentResolver::openFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	java::io::InputStream ContentResolver::openInputStream(android::net::Uri arg0)
	{
		return callObjectMethod(
			"openInputStream",
			"(Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	java::io::OutputStream ContentResolver::openOutputStream(android::net::Uri arg0)
	{
		return callObjectMethod(
			"openOutputStream",
			"(Landroid/net/Uri;)Ljava/io/OutputStream;",
			arg0.object()
		);
	}
	java::io::OutputStream ContentResolver::openOutputStream(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"openOutputStream",
			"(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;",
			arg0.object(),
			arg1
		);
	}
	android::content::res::AssetFileDescriptor ContentResolver::openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentResolver::openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	__JniBaseClass ContentResolver::query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	__JniBaseClass ContentResolver::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	__JniBaseClass ContentResolver::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	jboolean ContentResolver::refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2)
	{
		return callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ContentResolver::registerContentObserver(android::net::Uri arg0, jboolean arg1, android::database::ContentObserver arg2)
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void ContentResolver::releasePersistableUriPermission(android::net::Uri arg0, jint arg1)
	{
		callMethod<void>(
			"releasePersistableUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	void ContentResolver::startSync(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startSync",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContentResolver::takePersistableUriPermission(android::net::Uri arg0, jint arg1)
	{
		callMethod<void>(
			"takePersistableUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	android::net::Uri ContentResolver::uncanonicalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	void ContentResolver::unregisterContentObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	jint ContentResolver::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::content

