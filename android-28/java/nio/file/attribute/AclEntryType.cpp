#include "./AclEntryType.hpp"

namespace java::nio::file::attribute
{
	// Fields
	java::nio::file::attribute::AclEntryType AclEntryType::ALARM()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"ALARM",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	java::nio::file::attribute::AclEntryType AclEntryType::ALLOW()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"ALLOW",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	java::nio::file::attribute::AclEntryType AclEntryType::AUDIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"AUDIT",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	java::nio::file::attribute::AclEntryType AclEntryType::DENY()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"DENY",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	
	// QJniObject forward
	AclEntryType::AclEntryType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::AclEntryType AclEntryType::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryType;",
			arg0
		);
	}
	jarray AclEntryType::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryType",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryType;"
		).object<jarray>();
	}
} // namespace java::nio::file::attribute

