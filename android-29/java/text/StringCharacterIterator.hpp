#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::text
{
	class StringCharacterIterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		void __constructor(jstring arg0, jint arg1, jint arg2, jint arg3);
		void __constructor(const QString &arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jobject clone();
		jchar current();
		jboolean equals(jobject arg0);
		jchar first();
		jint getBeginIndex();
		jint getEndIndex();
		jint getIndex();
		jint hashCode();
		jchar last();
		jchar next();
		jchar previous();
		jchar setIndex(jint arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void StringCharacterIterator::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringCharacterIterator::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void StringCharacterIterator::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void StringCharacterIterator::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void StringCharacterIterator::__constructor(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void StringCharacterIterator::__constructor(const QString &arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jobject StringCharacterIterator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jchar StringCharacterIterator::current()
	{
		return __thiz.callMethod<jchar>(
			"current",
			"()C"
		);
	}
	jboolean StringCharacterIterator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jchar StringCharacterIterator::first()
	{
		return __thiz.callMethod<jchar>(
			"first",
			"()C"
		);
	}
	jint StringCharacterIterator::getBeginIndex()
	{
		return __thiz.callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::getEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jchar StringCharacterIterator::last()
	{
		return __thiz.callMethod<jchar>(
			"last",
			"()C"
		);
	}
	jchar StringCharacterIterator::next()
	{
		return __thiz.callMethod<jchar>(
			"next",
			"()C"
		);
	}
	jchar StringCharacterIterator::previous()
	{
		return __thiz.callMethod<jchar>(
			"previous",
			"()C"
		);
	}
	jchar StringCharacterIterator::setIndex(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"setIndex",
			"(I)C",
			arg0
		);
	}
	void StringCharacterIterator::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringCharacterIterator::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class StringCharacterIterator : public __jni_impl::java::text::StringCharacterIterator
	{
	public:
		StringCharacterIterator(QAndroidJniObject obj) { __thiz = obj; }
		StringCharacterIterator(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StringCharacterIterator(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		StringCharacterIterator(jstring arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::text

