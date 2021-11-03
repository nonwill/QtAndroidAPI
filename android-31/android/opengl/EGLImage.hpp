#pragma once

#include "./EGLObjectHandle.hpp"

class JObject;

namespace android::opengl
{
	class EGLImage : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLImage(const char *className, const char *sig, Ts...agv) : android::opengl::EGLObjectHandle(className, sig, std::forward<Ts>(agv)...) {}
		EGLImage(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
	};
} // namespace android::opengl

