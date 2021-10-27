#include "./BackupDataInputStream.hpp"
#include "./BackupDataOutput.hpp"
#include "../../content/Context.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./FileBackupHelper.hpp"

namespace android::app::backup
{
	// Fields
	
	FileBackupHelper::FileBackupHelper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileBackupHelper::FileBackupHelper(android::content::Context &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.FileBackupHelper",
			"(Landroid/content/Context;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void FileBackupHelper::performBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"performBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FileBackupHelper::restoreEntity(android::app::backup::BackupDataInputStream arg0)
	{
		__thiz.callMethod<void>(
			"restoreEntity",
			"(Landroid/app/backup/BackupDataInputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void FileBackupHelper::writeNewStateDescription(android::os::ParcelFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"writeNewStateDescription",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app::backup

