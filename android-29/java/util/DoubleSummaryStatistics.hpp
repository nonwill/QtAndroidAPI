#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class DoubleSummaryStatistics : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3);
		
		// Methods
		void accept(jdouble arg0);
		void combine(__jni_impl::java::util::DoubleSummaryStatistics arg0);
		jdouble getAverage();
		jlong getCount();
		jdouble getMax();
		jdouble getMin();
		jdouble getSum();
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void DoubleSummaryStatistics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.DoubleSummaryStatistics",
			"()V"
		);
	}
	void DoubleSummaryStatistics::__constructor(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.DoubleSummaryStatistics",
			"(JDDD)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void DoubleSummaryStatistics::accept(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"accept",
			"(D)V",
			arg0
		);
	}
	void DoubleSummaryStatistics::combine(__jni_impl::java::util::DoubleSummaryStatistics arg0)
	{
		__thiz.callMethod<void>(
			"combine",
			"(Ljava/util/DoubleSummaryStatistics;)V",
			arg0.__jniObject().object()
		);
	}
	jdouble DoubleSummaryStatistics::getAverage()
	{
		return __thiz.callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong DoubleSummaryStatistics::getCount()
	{
		return __thiz.callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jdouble DoubleSummaryStatistics::getMax()
	{
		return __thiz.callMethod<jdouble>(
			"getMax",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getMin()
	{
		return __thiz.callMethod<jdouble>(
			"getMin",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getSum()
	{
		return __thiz.callMethod<jdouble>(
			"getSum",
			"()D"
		);
	}
	jstring DoubleSummaryStatistics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class DoubleSummaryStatistics : public __jni_impl::java::util::DoubleSummaryStatistics
	{
	public:
		DoubleSummaryStatistics(QAndroidJniObject obj) { __thiz = obj; }
		DoubleSummaryStatistics()
		{
			__constructor();
		}
		DoubleSummaryStatistics(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::util

