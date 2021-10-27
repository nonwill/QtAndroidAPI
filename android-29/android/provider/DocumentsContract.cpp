#include "../content/ContentResolver.hpp"
#include "../content/Context.hpp"
#include "../content/IntentSender.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Point.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "./DocumentsContract_Path.hpp"
#include "./DocumentsContract.hpp"

namespace android::provider
{
	// Fields
	jstring DocumentsContract::ACTION_DOCUMENT_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"ACTION_DOCUMENT_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::EXTRA_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::EXTRA_EXCLUDE_SELF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_EXCLUDE_SELF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::EXTRA_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::EXTRA_INITIAL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_INITIAL_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::EXTRA_LOADING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_LOADING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::EXTRA_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_ORIENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::EXTRA_PROMPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_PROMPT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::METADATA_EXIF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_EXIF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::METADATA_TREE_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_TREE_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::METADATA_TREE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_TREE_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::METADATA_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_TYPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::PROVIDER_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"PROVIDER_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::QUERY_ARG_DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::QUERY_ARG_EXCLUDE_MEDIA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_EXCLUDE_MEDIA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::QUERY_ARG_FILE_SIZE_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_FILE_SIZE_OVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::QUERY_ARG_LAST_MODIFIED_AFTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_LAST_MODIFIED_AFTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract::QUERY_ARG_MIME_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_MIME_TYPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	DocumentsContract::DocumentsContract(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DocumentsContract::buildChildDocumentsUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsContract::buildChildDocumentsUri(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildChildDocumentsUriUsingTree(android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentsContract::buildChildDocumentsUriUsingTree(android::net::Uri arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildDocumentUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsContract::buildDocumentUri(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildDocumentUriUsingTree(android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentsContract::buildDocumentUriUsingTree(android::net::Uri arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildRecentDocumentsUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRecentDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsContract::buildRecentDocumentsUri(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRecentDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildRootUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsContract::buildRootUri(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildRootsUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootsUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject DocumentsContract::buildRootsUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootsUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildSearchDocumentsUri(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildSearchDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DocumentsContract::buildSearchDocumentsUri(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildSearchDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::buildTreeDocumentUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildTreeDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsContract::buildTreeDocumentUri(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildTreeDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::copyDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"copyDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsContract::createDocument(android::content::ContentResolver arg0, android::net::Uri arg1, jstring arg2, jstring arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"createDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject DocumentsContract::createDocument(android::content::ContentResolver arg0, android::net::Uri arg1, const QString &arg2, const QString &arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"createDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsContract::createWebLinkIntent(android::content::ContentResolver arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"createWebLinkIntent",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean DocumentsContract::deleteDocument(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"deleteDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DocumentsContract::ejectRoot(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.DocumentsContract",
			"ejectRoot",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsContract::findDocumentPath(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"findDocumentPath",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/provider/DocumentsContract$Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring DocumentsContract::getDocumentId(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DocumentsContract::getDocumentMetadata(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentMetadata",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsContract::getDocumentThumbnail(android::content::ContentResolver arg0, android::net::Uri arg1, android::graphics::Point arg2, android::os::CancellationSignal arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentThumbnail",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring DocumentsContract::getRootId(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getRootId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring DocumentsContract::getSearchDocumentsQuery(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getSearchDocumentsQuery",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring DocumentsContract::getTreeDocumentId(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getTreeDocumentId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean DocumentsContract::isChildDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isChildDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean DocumentsContract::isDocumentUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DocumentsContract::isRootUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isRootUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DocumentsContract::isRootsUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isRootsUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DocumentsContract::isTreeUri(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isTreeUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsContract::moveDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2, android::net::Uri arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"moveDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean DocumentsContract::removeDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"removeDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsContract::renameDocument(android::content::ContentResolver arg0, android::net::Uri arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"renameDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject DocumentsContract::renameDocument(android::content::ContentResolver arg0, android::net::Uri arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"renameDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
} // namespace android::provider
