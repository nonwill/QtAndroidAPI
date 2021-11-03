#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./attribute/UserPrincipalLookupService.hpp"
#include "./spi/FileSystemProvider.hpp"
#include "./FileSystem.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	FileSystem::FileSystem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void FileSystem::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject FileSystem::getFileStores()
	{
		return callObjectMethod(
			"getFileStores",
			"()Ljava/lang/Iterable;"
		);
	}
	JObject FileSystem::getPath(JString arg0, JArray arg1)
	{
		return callObjectMethod(
			"getPath",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	JObject FileSystem::getPathMatcher(JString arg0)
	{
		return callObjectMethod(
			"getPathMatcher",
			"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;",
			arg0.object<jstring>()
		);
	}
	JObject FileSystem::getRootDirectories()
	{
		return callObjectMethod(
			"getRootDirectories",
			"()Ljava/lang/Iterable;"
		);
	}
	JString FileSystem::getSeparator()
	{
		return callObjectMethod(
			"getSeparator",
			"()Ljava/lang/String;"
		);
	}
	java::nio::file::attribute::UserPrincipalLookupService FileSystem::getUserPrincipalLookupService()
	{
		return callObjectMethod(
			"getUserPrincipalLookupService",
			"()Ljava/nio/file/attribute/UserPrincipalLookupService;"
		);
	}
	jboolean FileSystem::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean FileSystem::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	JObject FileSystem::newWatchService()
	{
		return callObjectMethod(
			"newWatchService",
			"()Ljava/nio/file/WatchService;"
		);
	}
	java::nio::file::spi::FileSystemProvider FileSystem::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/file/spi/FileSystemProvider;"
		);
	}
	JObject FileSystem::supportedFileAttributeViews()
	{
		return callObjectMethod(
			"supportedFileAttributeViews",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::nio::file

