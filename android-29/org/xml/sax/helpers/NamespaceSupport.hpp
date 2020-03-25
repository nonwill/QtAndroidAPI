#pragma once

#ifndef ORG_XML_SAX_HELPERS_NAMESPACESUPPORT
#define ORG_XML_SAX_HELPERS_NAMESPACESUPPORT

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::xml::sax::helpers
{
	class NamespaceSupport : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject XMLNS();
		static QAndroidJniObject NSDECL();
		
		// Constructors
		void __constructor();
		
		// Methods
		void reset();
		QAndroidJniObject getURI(jstring arg0);
		QAndroidJniObject getPrefix(jstring arg0);
		QAndroidJniObject processName(jstring arg0, jarray arg1, jboolean arg2);
		jboolean declarePrefix(jstring arg0, jstring arg1);
		QAndroidJniObject getDeclaredPrefixes();
		void pushContext();
		void popContext();
		void setNamespaceDeclUris(jboolean arg0);
		jboolean isNamespaceDeclUris();
		QAndroidJniObject getPrefixes();
		QAndroidJniObject getPrefixes(jstring arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers


namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	QAndroidJniObject NamespaceSupport::XMLNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"XMLNS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NamespaceSupport::NSDECL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"NSDECL",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void NamespaceSupport::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.NamespaceSupport",
			"()V");
	}
	
	// Methods
	void NamespaceSupport::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	QAndroidJniObject NamespaceSupport::getURI(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getURI",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject NamespaceSupport::getPrefix(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPrefix",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject NamespaceSupport::processName(jstring arg0, jarray arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"processName",
			"(Ljava/lang/String;[Ljava/lang/String;Z)[Ljava/lang/String;",
			arg0,
			arg1,
			arg2);
	}
	jboolean NamespaceSupport::declarePrefix(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"declarePrefix",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject NamespaceSupport::getDeclaredPrefixes()
	{
		return __thiz.callObjectMethod(
			"getDeclaredPrefixes",
			"()Ljava/util/Enumeration;");
	}
	void NamespaceSupport::pushContext()
	{
		__thiz.callMethod<void>(
			"pushContext",
			"()V");
	}
	void NamespaceSupport::popContext()
	{
		__thiz.callMethod<void>(
			"popContext",
			"()V");
	}
	void NamespaceSupport::setNamespaceDeclUris(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceDeclUris",
			"(Z)V",
			arg0);
	}
	jboolean NamespaceSupport::isNamespaceDeclUris()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceDeclUris",
			"()Z");
	}
	QAndroidJniObject NamespaceSupport::getPrefixes()
	{
		return __thiz.callObjectMethod(
			"getPrefixes",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject NamespaceSupport::getPrefixes(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPrefixes",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class NamespaceSupport : public __jni_impl::org::xml::sax::helpers::NamespaceSupport
	{
	public:
		NamespaceSupport(QAndroidJniObject obj) { __thiz = obj; }
		NamespaceSupport()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_NAMESPACESUPPORT

