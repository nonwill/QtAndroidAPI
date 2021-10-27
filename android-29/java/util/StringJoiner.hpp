#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class StringJoiner : public __JniBaseClass
	{
	public:
		// Fields
		
		StringJoiner(QAndroidJniObject obj);
		// Constructors
		StringJoiner(jstring &arg0);
		StringJoiner(const QString &arg0);
		StringJoiner(jstring &arg0, jstring &arg1, jstring &arg2);
		StringJoiner(const QString &arg0, const QString &arg1, const QString &arg2);
		StringJoiner() = default;
		
		// Methods
		QAndroidJniObject add(jstring arg0);
		QAndroidJniObject add(const QString &arg0);
		jint length();
		QAndroidJniObject merge(java::util::StringJoiner arg0);
		QAndroidJniObject setEmptyValue(jstring arg0);
		QAndroidJniObject setEmptyValue(const QString &arg0);
		jstring toString();
	};
} // namespace java::util

