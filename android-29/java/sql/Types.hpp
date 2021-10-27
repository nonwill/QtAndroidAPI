#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::sql
{
	class Types : public __JniBaseClass
	{
	public:
		// Fields
		static jint ARRAY();
		static jint BIGINT();
		static jint BINARY();
		static jint BIT();
		static jint BLOB();
		static jint BOOLEAN();
		static jint CHAR();
		static jint CLOB();
		static jint DATALINK();
		static jint DATE();
		static jint DECIMAL();
		static jint DISTINCT();
		static jint DOUBLE();
		static jint FLOAT();
		static jint INTEGER();
		static jint JAVA_OBJECT();
		static jint LONGNVARCHAR();
		static jint LONGVARBINARY();
		static jint LONGVARCHAR();
		static jint NCHAR();
		static jint NCLOB();
		static jint _NULL();
		static jint NUMERIC();
		static jint NVARCHAR();
		static jint OTHER();
		static jint REAL();
		static jint REF();
		static jint REF_CURSOR();
		static jint ROWID();
		static jint SMALLINT();
		static jint SQLXML();
		static jint STRUCT();
		static jint TIME();
		static jint TIMESTAMP();
		static jint TIMESTAMP_WITH_TIMEZONE();
		static jint TIME_WITH_TIMEZONE();
		static jint TINYINT();
		static jint VARBINARY();
		static jint VARCHAR();
		
		Types(QAndroidJniObject obj);
		// Constructors
		Types() = default;
		
		// Methods
	};
} // namespace java::sql

