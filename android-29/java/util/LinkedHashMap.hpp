#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractMap.hpp"
#include "./HashMap.hpp"

namespace java::io
{
	class ObjectOutputStream;
}

namespace java::util
{
	class LinkedHashMap : public java::util::HashMap
	{
	public:
		// Fields
		
		LinkedHashMap(QAndroidJniObject obj);
		// Constructors
		LinkedHashMap();
		LinkedHashMap(jint &arg0);
		LinkedHashMap(__JniBaseClass &arg0);
		LinkedHashMap(jint &arg0, jfloat &arg1);
		LinkedHashMap(jint &arg0, jfloat &arg1, jboolean &arg2);
		
		// Methods
		void clear();
		jboolean containsValue(jobject arg0);
		QAndroidJniObject entrySet();
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		QAndroidJniObject keySet();
		void replaceAll(__JniBaseClass arg0);
		QAndroidJniObject values();
	};
} // namespace java::util

