#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::ref
{
	class WeakReference;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio
{
	class CharBuffer;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::nio::charset
{
	class CoderResult;
}
namespace __jni_impl::java::nio::charset
{
	class CodingErrorAction;
}

namespace __jni_impl::java::nio::charset
{
	class CharsetEncoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jfloat averageBytesPerChar();
		jboolean canEncode(jchar arg0);
		jboolean canEncode(jstring arg0);
		jboolean canEncode(const QString &arg0);
		QAndroidJniObject charset();
		QAndroidJniObject encode(__jni_impl::java::nio::CharBuffer arg0);
		QAndroidJniObject encode(__jni_impl::java::nio::CharBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1, jboolean arg2);
		QAndroidJniObject flush(__jni_impl::java::nio::ByteBuffer arg0);
		jboolean isLegalReplacement(jbyteArray arg0);
		QAndroidJniObject malformedInputAction();
		jfloat maxBytesPerChar();
		QAndroidJniObject onMalformedInput(__jni_impl::java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject onUnmappableCharacter(__jni_impl::java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject replaceWith(jbyteArray arg0);
		jbyteArray replacement();
		QAndroidJniObject reset();
		QAndroidJniObject unmappableCharacterAction();
	};
} // namespace __jni_impl::java::nio::charset

#include "../../lang/ref/WeakReference.hpp"
#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "Charset.hpp"
#include "CoderResult.hpp"
#include "CodingErrorAction.hpp"

namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void CharsetEncoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CharsetEncoder",
			"(V)V");
	}
	
	// Methods
	jfloat CharsetEncoder::averageBytesPerChar()
	{
		return __thiz.callMethod<jfloat>(
			"averageBytesPerChar",
			"()F"
		);
	}
	jboolean CharsetEncoder::canEncode(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"(C)Z",
			arg0
		);
	}
	jboolean CharsetEncoder::canEncode(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean CharsetEncoder::canEncode(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"(Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject CharsetEncoder::charset()
	{
		return __thiz.callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetEncoder::encode(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetEncoder::encode(__jni_impl::java::nio::CharBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject CharsetEncoder::flush(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"flush",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object()
		);
	}
	jboolean CharsetEncoder::isLegalReplacement(jbyteArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLegalReplacement",
			"([B)Z",
			arg0
		);
	}
	QAndroidJniObject CharsetEncoder::malformedInputAction()
	{
		return __thiz.callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	jfloat CharsetEncoder::maxBytesPerChar()
	{
		return __thiz.callMethod<jfloat>(
			"maxBytesPerChar",
			"()F"
		);
	}
	QAndroidJniObject CharsetEncoder::onMalformedInput(__jni_impl::java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetEncoder::onUnmappableCharacter(__jni_impl::java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetEncoder::replaceWith(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"replaceWith",
			"([B)Ljava/nio/charset/CharsetEncoder;",
			arg0
		);
	}
	jbyteArray CharsetEncoder::replacement()
	{
		return __thiz.callObjectMethod(
			"replacement",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject CharsetEncoder::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	QAndroidJniObject CharsetEncoder::unmappableCharacterAction()
	{
		return __thiz.callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class CharsetEncoder : public __jni_impl::java::nio::charset::CharsetEncoder
	{
	public:
		CharsetEncoder(QAndroidJniObject obj) { __thiz = obj; }
		CharsetEncoder()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset

