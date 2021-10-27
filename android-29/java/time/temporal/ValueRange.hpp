#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}

namespace java::time::temporal
{
	class ValueRange : public __JniBaseClass
	{
	public:
		// Fields
		
		ValueRange(QAndroidJniObject obj);
		// Constructors
		ValueRange() = default;
		
		// Methods
		static QAndroidJniObject of(jlong arg0, jlong arg1);
		static QAndroidJniObject of(jlong arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject of(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		jint checkValidIntValue(jlong arg0, __JniBaseClass arg1);
		jlong checkValidValue(jlong arg0, __JniBaseClass arg1);
		jboolean equals(jobject arg0);
		jlong getLargestMinimum();
		jlong getMaximum();
		jlong getMinimum();
		jlong getSmallestMaximum();
		jint hashCode();
		jboolean isFixed();
		jboolean isIntValue();
		jboolean isValidIntValue(jlong arg0);
		jboolean isValidValue(jlong arg0);
		jstring toString();
	};
} // namespace java::time::temporal

