#include "./AclEntryFlag.hpp"

namespace java::nio::file::attribute
{
	// Fields
	QAndroidJniObject AclEntryFlag::DIRECTORY_INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"DIRECTORY_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	QAndroidJniObject AclEntryFlag::FILE_INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"FILE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	QAndroidJniObject AclEntryFlag::INHERIT_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"INHERIT_ONLY",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	QAndroidJniObject AclEntryFlag::NO_PROPAGATE_INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"NO_PROPAGATE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	
	AclEntryFlag::AclEntryFlag(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AclEntryFlag::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryFlag;",
			arg0
		);
	}
	QAndroidJniObject AclEntryFlag::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryFlag;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray AclEntryFlag::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryFlag;"
		).object<jarray>();
	}
} // namespace java::nio::file::attribute
