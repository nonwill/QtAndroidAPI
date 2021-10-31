#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::usage
{
	class ExternalStorageStats;
}
namespace android::app::usage
{
	class StorageStats;
}
namespace android::os
{
	class UserHandle;
}
namespace java::util
{
	class UUID;
}

namespace android::app::usage
{
	class StorageStatsManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StorageStatsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StorageStatsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getFreeBytes(java::util::UUID arg0);
		jlong getTotalBytes(java::util::UUID arg0);
		android::app::usage::ExternalStorageStats queryExternalStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1);
		android::app::usage::StorageStats queryStatsForPackage(java::util::UUID arg0, jstring arg1, android::os::UserHandle arg2);
		android::app::usage::StorageStats queryStatsForUid(java::util::UUID arg0, jint arg1);
		android::app::usage::StorageStats queryStatsForUser(java::util::UUID arg0, android::os::UserHandle arg1);
	};
} // namespace android::app::usage

