#include "./AclEntryPermission.hpp"

namespace java::nio::file::attribute
{
	// Fields
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::ADD_FILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"ADD_FILE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::ADD_SUBDIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"ADD_SUBDIRECTORY",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::APPEND_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"APPEND_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"DELETE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::DELETE_CHILD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"DELETE_CHILD",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"EXECUTE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::LIST_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"LIST_DIRECTORY",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_ACL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_ACL",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_ATTRIBUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_ATTRIBUTES",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_NAMED_ATTRS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_NAMED_ATTRS",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::SYNCHRONIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"SYNCHRONIZE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_ACL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_ACL",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_ATTRIBUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_ATTRIBUTES",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_NAMED_ATTRS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_NAMED_ATTRS",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_OWNER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_OWNER",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	
	// QAndroidJniObject forward
	AclEntryPermission::AclEntryPermission(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryPermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryPermission;",
			arg0
		);
	}
	jarray AclEntryPermission::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryPermission",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryPermission;"
		).object<jarray>();
	}
} // namespace java::nio::file::attribute

