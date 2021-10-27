#include "../../../java/lang/ClassLoader.hpp"
#include "./Transformer.hpp"
#include "./TransformerFactory.hpp"

namespace javax::xml::transform
{
	// Fields
	
	TransformerFactory::TransformerFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TransformerFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newDefaultInstance",
			"()Ljavax/xml/transform/TransformerFactory;"
		);
	}
	QAndroidJniObject TransformerFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"()Ljavax/xml/transform/TransformerFactory;"
		);
	}
	QAndroidJniObject TransformerFactory::newInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TransformerFactory::newInstance(const QString &arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TransformerFactory::getAssociatedStylesheet(__JniBaseClass arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		return __thiz.callObjectMethod(
			"getAssociatedStylesheet",
			"(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject TransformerFactory::getAssociatedStylesheet(__JniBaseClass arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		return __thiz.callObjectMethod(
			"getAssociatedStylesheet",
			"(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	jobject TransformerFactory::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject TransformerFactory::getAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject TransformerFactory::getErrorListener()
	{
		return __thiz.callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	jboolean TransformerFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TransformerFactory::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TransformerFactory::getURIResolver()
	{
		return __thiz.callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	QAndroidJniObject TransformerFactory::newTemplates(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newTemplates",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransformerFactory::newTransformer()
	{
		return __thiz.callObjectMethod(
			"newTransformer",
			"()Ljavax/xml/transform/Transformer;"
		);
	}
	QAndroidJniObject TransformerFactory::newTransformer(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newTransformer",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;",
			arg0.__jniObject().object()
		);
	}
	void TransformerFactory::setAttribute(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void TransformerFactory::setAttribute(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void TransformerFactory::setErrorListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TransformerFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void TransformerFactory::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void TransformerFactory::setURIResolver(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::xml::transform
