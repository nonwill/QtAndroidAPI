#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::math
{
	class RoundingMode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CEILING();
		static QAndroidJniObject DOWN();
		static QAndroidJniObject FLOOR();
		static QAndroidJniObject HALF_DOWN();
		static QAndroidJniObject HALF_EVEN();
		static QAndroidJniObject HALF_UP();
		static QAndroidJniObject UNNECESSARY();
		static QAndroidJniObject UP();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::math


namespace __jni_impl::java::math
{
	// Fields
	QAndroidJniObject RoundingMode::CEILING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"CEILING",
			"Ljava/math/RoundingMode;"
		);
	}
	QAndroidJniObject RoundingMode::DOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"DOWN",
			"Ljava/math/RoundingMode;"
		);
	}
	QAndroidJniObject RoundingMode::FLOOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"FLOOR",
			"Ljava/math/RoundingMode;"
		);
	}
	QAndroidJniObject RoundingMode::HALF_DOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_DOWN",
			"Ljava/math/RoundingMode;"
		);
	}
	QAndroidJniObject RoundingMode::HALF_EVEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_EVEN",
			"Ljava/math/RoundingMode;"
		);
	}
	QAndroidJniObject RoundingMode::HALF_UP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"HALF_UP",
			"Ljava/math/RoundingMode;"
		);
	}
	QAndroidJniObject RoundingMode::UNNECESSARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"UNNECESSARY",
			"Ljava/math/RoundingMode;"
		);
	}
	QAndroidJniObject RoundingMode::UP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.RoundingMode",
			"UP",
			"Ljava/math/RoundingMode;"
		);
	}
	
	// Constructors
	void RoundingMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.math.RoundingMode",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RoundingMode::valueOf(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.RoundingMode",
			"valueOf",
			"(I)Ljava/math/RoundingMode;",
			arg0
		);
	}
	QAndroidJniObject RoundingMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.RoundingMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/math/RoundingMode;",
			arg0
		);
	}
	QAndroidJniObject RoundingMode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.RoundingMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/math/RoundingMode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RoundingMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.RoundingMode",
			"values",
			"()[Ljava/math/RoundingMode;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::math

namespace java::math
{
	class RoundingMode : public __jni_impl::java::math::RoundingMode
	{
	public:
		RoundingMode(QAndroidJniObject obj) { __thiz = obj; }
		RoundingMode()
		{
			__constructor();
		}
	};
} // namespace java::math

