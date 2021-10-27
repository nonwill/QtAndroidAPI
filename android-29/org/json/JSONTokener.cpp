#include "./JSONException.hpp"
#include "./JSONTokener.hpp"

namespace org::json
{
	// Fields
	
	JSONTokener::JSONTokener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JSONTokener::JSONTokener(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONTokener",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	JSONTokener::JSONTokener(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONTokener",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint JSONTokener::dehexchar(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.json.JSONTokener",
			"dehexchar",
			"(C)I",
			arg0
		);
	}
	void JSONTokener::back()
	{
		__thiz.callMethod<void>(
			"back",
			"()V"
		);
	}
	jboolean JSONTokener::more()
	{
		return __thiz.callMethod<jboolean>(
			"more",
			"()Z"
		);
	}
	jchar JSONTokener::next()
	{
		return __thiz.callMethod<jchar>(
			"next",
			"()C"
		);
	}
	jchar JSONTokener::next(jchar arg0)
	{
		return __thiz.callMethod<jchar>(
			"next",
			"(C)C",
			arg0
		);
	}
	jstring JSONTokener::next(jint arg0)
	{
		return __thiz.callObjectMethod(
			"next",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jchar JSONTokener::nextClean()
	{
		return __thiz.callMethod<jchar>(
			"nextClean",
			"()C"
		);
	}
	jstring JSONTokener::nextString(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"nextString",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONTokener::nextTo(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONTokener::nextTo(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONTokener::nextTo(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jobject JSONTokener::nextValue()
	{
		return __thiz.callObjectMethod(
			"nextValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void JSONTokener::skipPast(jstring arg0)
	{
		__thiz.callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JSONTokener::skipPast(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jchar JSONTokener::skipTo(jchar arg0)
	{
		return __thiz.callMethod<jchar>(
			"skipTo",
			"(C)C",
			arg0
		);
	}
	QAndroidJniObject JSONTokener::syntaxError(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			arg0
		);
	}
	QAndroidJniObject JSONTokener::syntaxError(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring JSONTokener::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace org::json
