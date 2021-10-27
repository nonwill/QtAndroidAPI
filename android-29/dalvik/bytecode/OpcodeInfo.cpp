#include "./OpcodeInfo.hpp"

namespace dalvik::bytecode
{
	// Fields
	jint OpcodeInfo::MAXIMUM_PACKED_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_PACKED_VALUE"
		);
	}
	jint OpcodeInfo::MAXIMUM_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_VALUE"
		);
	}
	
	OpcodeInfo::OpcodeInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace dalvik::bytecode
