#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class RuleBasedCollator;
}

namespace __jni_impl::java::text
{
	class CollationElementIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint NULLORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint primaryOrder(jint arg0);
		static jshort secondaryOrder(jint arg0);
		static jshort tertiaryOrder(jint arg0);
		jint getMaxExpansion(jint arg0);
		jint getOffset();
		jint next();
		jint previous();
		void reset();
		void setOffset(jint arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setText(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::text

#include "../lang/StringBuffer.hpp"
#include "RuleBasedCollator.hpp"

namespace __jni_impl::java::text
{
	// Fields
	jint CollationElementIterator::NULLORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.CollationElementIterator",
			"NULLORDER"
		);
	}
	
	// Constructors
	void CollationElementIterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.CollationElementIterator",
			"(V)V");
	}
	
	// Methods
	jint CollationElementIterator::primaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.text.CollationElementIterator",
			"primaryOrder",
			"(I)I",
			arg0
		);
	}
	jshort CollationElementIterator::secondaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.text.CollationElementIterator",
			"secondaryOrder",
			"(I)S",
			arg0
		);
	}
	jshort CollationElementIterator::tertiaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.text.CollationElementIterator",
			"tertiaryOrder",
			"(I)S",
			arg0
		);
	}
	jint CollationElementIterator::getMaxExpansion(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaxExpansion",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint CollationElementIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint CollationElementIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void CollationElementIterator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void CollationElementIterator::setOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOffset",
			"(I)V",
			arg0
		);
	}
	void CollationElementIterator::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CollationElementIterator::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CollationElementIterator::setText(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class CollationElementIterator : public __jni_impl::java::text::CollationElementIterator
	{
	public:
		CollationElementIterator(QAndroidJniObject obj) { __thiz = obj; }
		CollationElementIterator()
		{
			__constructor();
		}
	};
} // namespace java::text

