#pragma once

#include "./Shader.def.hpp"

class JFloatArray;
class JIntArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RadialGradient(const char *className, const char *sig, Ts...agv) : android::graphics::Shader(className, sig, std::forward<Ts>(agv)...) {}
		RadialGradient(QAndroidJniObject obj) : android::graphics::Shader(obj) {}
		
		// Constructors
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, JIntArray arg3, JFloatArray arg4, android::graphics::Shader_TileMode arg5);
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, android::graphics::Shader_TileMode arg5);
		
		// Methods
	};
} // namespace android::graphics

