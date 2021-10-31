#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class BaseObj : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseObj(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BaseObj(QJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy();
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		void setName(jstring arg0);
	};
} // namespace android::renderscript

