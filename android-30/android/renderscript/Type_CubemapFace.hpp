#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Type_CubemapFace : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::Type_CubemapFace NEGATIVE_X();
		static android::renderscript::Type_CubemapFace NEGATIVE_Y();
		static android::renderscript::Type_CubemapFace NEGATIVE_Z();
		static android::renderscript::Type_CubemapFace POSITIVE_X();
		static android::renderscript::Type_CubemapFace POSITIVE_Y();
		static android::renderscript::Type_CubemapFace POSITIVE_Z();
		static android::renderscript::Type_CubemapFace POSITVE_X();
		static android::renderscript::Type_CubemapFace POSITVE_Y();
		static android::renderscript::Type_CubemapFace POSITVE_Z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Type_CubemapFace(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Type_CubemapFace(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::Type_CubemapFace valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

