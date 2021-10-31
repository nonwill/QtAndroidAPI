#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Shader.hpp"

namespace android::graphics
{
	class Shader_TileMode;
}

namespace android::graphics
{
	class RadialGradient : public android::graphics::Shader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RadialGradient(const char *className, const char *sig, Ts...agv) : android::graphics::Shader(className, sig, std::forward<Ts>(agv)...) {}
		RadialGradient(QJniObject obj);
		
		// Constructors
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jintArray arg3, jfloatArray arg4, android::graphics::Shader_TileMode arg5);
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jlongArray arg3, jfloatArray arg4, android::graphics::Shader_TileMode arg5);
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, android::graphics::Shader_TileMode arg5);
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3, jlong arg4, android::graphics::Shader_TileMode arg5);
		
		// Methods
	};
} // namespace android::graphics

