#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::backup
{
	class BackupDataOutput : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackupDataOutput(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataOutput(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getQuota();
		jint getTransportFlags();
		jint writeEntityData(jbyteArray arg0, jint arg1);
		jint writeEntityHeader(jstring arg0, jint arg1);
	};
} // namespace android::app::backup

