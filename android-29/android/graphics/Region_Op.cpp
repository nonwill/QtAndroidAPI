#include "./Region_Op.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Region_Op Region_Op::DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"DIFFERENCE",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::INTERSECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"INTERSECT",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::REPLACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"REPLACE",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::REVERSE_DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::UNION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"UNION",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"XOR",
			"Landroid/graphics/Region$Op;"
		);
	}
	
	// QAndroidJniObject forward
	Region_Op::Region_Op(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Region_Op Region_Op::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Region$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Region$Op;",
			arg0
		);
	}
	jarray Region_Op::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Region$Op",
			"values",
			"()[Landroid/graphics/Region$Op;"
		).object<jarray>();
	}
} // namespace android::graphics

