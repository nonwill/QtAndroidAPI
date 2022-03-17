#pragma once

#include "./BaseObj.def.hpp"

namespace android::renderscript
{
	class Script_FieldID : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Script_FieldID(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Script_FieldID(QAndroidJniObject obj) : android::renderscript::BaseObj(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

