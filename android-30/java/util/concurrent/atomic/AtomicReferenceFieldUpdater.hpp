#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicReferenceFieldUpdater(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReferenceFieldUpdater(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicReferenceFieldUpdater newUpdater(jclass arg0, jclass arg1, jstring arg2);
		jobject accumulateAndGet(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jboolean compareAndSet(jobject arg0, jobject arg1, jobject arg2);
		jobject get(jobject arg0);
		jobject getAndAccumulate(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jobject getAndSet(jobject arg0, jobject arg1);
		jobject getAndUpdate(jobject arg0, __JniBaseClass arg1);
		void lazySet(jobject arg0, jobject arg1);
		void set(jobject arg0, jobject arg1);
		jobject updateAndGet(jobject arg0, __JniBaseClass arg1);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1, jobject arg2);
	};
} // namespace java::util::concurrent::atomic
