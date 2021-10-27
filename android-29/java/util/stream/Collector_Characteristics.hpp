#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::util::stream
{
	class Collector_Characteristics : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONCURRENT();
		static QAndroidJniObject IDENTITY_FINISH();
		static QAndroidJniObject UNORDERED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::util::stream


namespace __jni_impl::java::util::stream
{
	// Fields
	QAndroidJniObject Collector_Characteristics::CONCURRENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"CONCURRENT",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	QAndroidJniObject Collector_Characteristics::IDENTITY_FINISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"IDENTITY_FINISH",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	QAndroidJniObject Collector_Characteristics::UNORDERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"UNORDERED",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	
	// Constructors
	void Collector_Characteristics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.stream.Collector$Characteristics",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Collector_Characteristics::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;",
			arg0
		);
	}
	QAndroidJniObject Collector_Characteristics::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Collector_Characteristics::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"values",
			"()[Ljava/util/stream/Collector$Characteristics;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::util::stream

namespace java::util::stream
{
	class Collector_Characteristics : public __jni_impl::java::util::stream::Collector_Characteristics
	{
	public:
		Collector_Characteristics(QAndroidJniObject obj) { __thiz = obj; }
		Collector_Characteristics()
		{
			__constructor();
		}
	};
} // namespace java::util::stream

