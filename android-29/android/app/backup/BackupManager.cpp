#include "./RestoreObserver.hpp"
#include "../../content/Context.hpp"
#include "../../os/UserHandle.hpp"
#include "./BackupManager.hpp"

namespace android::app::backup
{
	// Fields
	
	BackupManager::BackupManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BackupManager::BackupManager(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupManager",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void BackupManager::dataChanged(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.backup.BackupManager",
			"dataChanged",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BackupManager::dataChanged(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.backup.BackupManager",
			"dataChanged",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BackupManager::dataChanged()
	{
		__thiz.callMethod<void>(
			"dataChanged",
			"()V"
		);
	}
	QAndroidJniObject BackupManager::getUserForAncestralSerialNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"getUserForAncestralSerialNumber",
			"(J)Landroid/os/UserHandle;",
			arg0
		);
	}
	jint BackupManager::requestRestore(android::app::backup::RestoreObserver arg0)
	{
		return __thiz.callMethod<jint>(
			"requestRestore",
			"(Landroid/app/backup/RestoreObserver;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app::backup

