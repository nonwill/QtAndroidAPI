#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Number.hpp"

namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Byte : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jbyte MAX_VALUE();
		static jbyte MIN_VALUE();
		static jint SIZE();
		static jclass TYPE();
		
		Byte(QAndroidJniObject obj);
		// Constructors
		Byte(jbyte &arg0);
		Byte(jstring &arg0);
		Byte(const QString &arg0);
		Byte() = default;
		
		// Methods
		static jint compare(jbyte arg0, jbyte arg1);
		static jint compareUnsigned(jbyte arg0, jbyte arg1);
		static QAndroidJniObject decode(jstring arg0);
		static QAndroidJniObject decode(const QString &arg0);
		static jint hashCode(jbyte arg0);
		static jbyte parseByte(jstring arg0);
		static jbyte parseByte(const QString &arg0);
		static jbyte parseByte(jstring arg0, jint arg1);
		static jbyte parseByte(const QString &arg0, jint arg1);
		static jstring toString(jbyte arg0);
		static jint toUnsignedInt(jbyte arg0);
		static jlong toUnsignedLong(jbyte arg0);
		static QAndroidJniObject valueOf(jbyte arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static QAndroidJniObject valueOf(jstring arg0, jint arg1);
		static QAndroidJniObject valueOf(const QString &arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(java::lang::Byte arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject describeConstable();
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jlong longValue();
		jshort shortValue();
		jstring toString();
	};
} // namespace java::lang

