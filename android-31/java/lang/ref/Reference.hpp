#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::lang::ref
{
	class Reference : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Reference(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Reference(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void reachabilityFence(jobject arg0);
		void clear();
		jboolean enqueue();
		jobject get();
		jboolean isEnqueued();
		jboolean refersTo(jobject arg0);
	};
} // namespace java::lang::ref
