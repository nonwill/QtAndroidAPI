#include "./DropBoxManager_Entry.hpp"
#include "../../java/io/File.hpp"
#include "./DropBoxManager.hpp"

namespace android::os
{
	// Fields
	jstring DropBoxManager::ACTION_DROPBOX_ENTRY_ADDED()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"ACTION_DROPBOX_ENTRY_ADDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DropBoxManager::EXTRA_TAG()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DropBoxManager::EXTRA_TIME()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DropBoxManager::IS_EMPTY()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_EMPTY"
		);
	}
	jint DropBoxManager::IS_GZIPPED()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_GZIPPED"
		);
	}
	jint DropBoxManager::IS_TEXT()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_TEXT"
		);
	}
	
	// QJniObject forward
	DropBoxManager::DropBoxManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void DropBoxManager::addData(jstring arg0, jbyteArray arg1, jint arg2)
	{
		callMethod<void>(
			"addData",
			"(Ljava/lang/String;[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DropBoxManager::addFile(jstring arg0, java::io::File arg1, jint arg2)
	{
		callMethod<void>(
			"addFile",
			"(Ljava/lang/String;Ljava/io/File;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void DropBoxManager::addText(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"addText",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	android::os::DropBoxManager_Entry DropBoxManager::getNextEntry(jstring arg0, jlong arg1)
	{
		return callObjectMethod(
			"getNextEntry",
			"(Ljava/lang/String;J)Landroid/os/DropBoxManager$Entry;",
			arg0,
			arg1
		);
	}
	jboolean DropBoxManager::isTagEnabled(jstring arg0)
	{
		return callMethod<jboolean>(
			"isTagEnabled",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
} // namespace android::os

