#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::io
{
	class ObjectStreamField;
}
namespace __jni_impl::java::lang
{
	class ClassNotFoundException;
}
namespace __jni_impl::java::lang
{
	class Long;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodHandle;
}
namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::lang::reflect
{
	class Constructor;
}
namespace __jni_impl::java::lang::reflect
{
	class Method;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}

namespace __jni_impl::java::io
{
	class ObjectStreamClass : public __JniBaseClass
	{
	public:
		// Fields
		static jarray NO_FIELDS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject lookup(jclass arg0);
		static QAndroidJniObject lookupAny(jclass arg0);
		jclass forClass();
		QAndroidJniObject getField(jstring arg0);
		QAndroidJniObject getField(const QString &arg0);
		jarray getFields();
		jstring getName();
		jlong getSerialVersionUID();
		jstring toString();
	};
} // namespace __jni_impl::java::io

#include "ObjectInputStream.hpp"
#include "ObjectOutputStream.hpp"
#include "ObjectStreamField.hpp"
#include "../lang/ClassNotFoundException.hpp"
#include "../lang/Long.hpp"
#include "../lang/invoke/MethodHandle.hpp"
#include "../lang/ref/ReferenceQueue.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "../lang/reflect/Method.hpp"
#include "../security/ProtectionDomain.hpp"

namespace __jni_impl::java::io
{
	// Fields
	jarray ObjectStreamClass::NO_FIELDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.ObjectStreamClass",
			"NO_FIELDS",
			"[Ljava/io/ObjectStreamField;"
		).object<jarray>();
	}
	
	// Constructors
	void ObjectStreamClass::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamClass",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ObjectStreamClass::lookup(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookup",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0
		);
	}
	QAndroidJniObject ObjectStreamClass::lookupAny(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookupAny",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0
		);
	}
	jclass ObjectStreamClass::forClass()
	{
		return __thiz.callObjectMethod(
			"forClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	QAndroidJniObject ObjectStreamClass::getField(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			arg0
		);
	}
	QAndroidJniObject ObjectStreamClass::getField(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ObjectStreamClass::getFields()
	{
		return __thiz.callObjectMethod(
			"getFields",
			"()[Ljava/io/ObjectStreamField;"
		).object<jarray>();
	}
	jstring ObjectStreamClass::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ObjectStreamClass::getSerialVersionUID()
	{
		return __thiz.callMethod<jlong>(
			"getSerialVersionUID",
			"()J"
		);
	}
	jstring ObjectStreamClass::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectStreamClass : public __jni_impl::java::io::ObjectStreamClass
	{
	public:
		ObjectStreamClass(QAndroidJniObject obj) { __thiz = obj; }
		ObjectStreamClass()
		{
			__constructor();
		}
	};
} // namespace java::io

