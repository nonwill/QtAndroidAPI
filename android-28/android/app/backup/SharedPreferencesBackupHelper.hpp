#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::backup
{
	class BackupDataInputStream;
}
namespace android::app::backup
{
	class BackupDataOutput;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::app::backup
{
	class SharedPreferencesBackupHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SharedPreferencesBackupHelper(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SharedPreferencesBackupHelper(QJniObject obj);
		
		// Constructors
		SharedPreferencesBackupHelper(android::content::Context arg0, jarray arg1);
		
		// Methods
		void performBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2);
		void restoreEntity(android::app::backup::BackupDataInputStream arg0);
		void writeNewStateDescription(android::os::ParcelFileDescriptor arg0);
	};
} // namespace android::app::backup

