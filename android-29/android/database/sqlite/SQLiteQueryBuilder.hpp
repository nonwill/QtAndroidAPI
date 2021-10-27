#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER
#define ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::android::database::sqlite
{
	class SQLiteQueryBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void appendColumns(__jni_impl::java::lang::StringBuilder arg0, jarray arg1);
		static jstring buildQueryString(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		static jstring buildQueryString(jboolean arg0, const QString &arg1, jarray arg2, const QString &arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7);
		void appendWhere(jstring arg0);
		void appendWhere(const QString &arg0);
		void appendWhereEscapeString(jstring arg0);
		void appendWhereEscapeString(const QString &arg0);
		void appendWhereStandalone(jstring arg0);
		void appendWhereStandalone(const QString &arg0);
		jstring buildQuery(jarray arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		jstring buildQuery(jarray arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5);
		jstring buildQuery(jarray arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6);
		jstring buildQuery(jarray arg0, const QString &arg1, jarray arg2, const QString &arg3, const QString &arg4, const QString &arg5, const QString &arg6);
		jstring buildUnionQuery(jarray arg0, jstring arg1, jstring arg2);
		jstring buildUnionQuery(jarray arg0, const QString &arg1, const QString &arg2);
		jstring buildUnionSubQuery(jstring arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		jstring buildUnionSubQuery(const QString &arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7);
		jstring buildUnionSubQuery(jstring arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jarray arg6, jstring arg7, jstring arg8);
		jstring buildUnionSubQuery(const QString &arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, const QString &arg4, const QString &arg5, jarray arg6, const QString &arg7, const QString &arg8);
		jint _delete(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		jint _delete(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2);
		QAndroidJniObject getCursorFactory();
		QAndroidJniObject getProjectionMap();
		jstring getTables();
		jboolean isDistinct();
		jboolean isStrict();
		QAndroidJniObject query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6);
		QAndroidJniObject query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6);
		QAndroidJniObject query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		QAndroidJniObject query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7);
		QAndroidJniObject query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7, __jni_impl::android::os::CancellationSignal arg8);
		QAndroidJniObject query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7, __jni_impl::android::os::CancellationSignal arg8);
		void setCursorFactory(__jni_impl::__JniBaseClass arg0);
		void setDistinct(jboolean arg0);
		void setProjectionMap(__jni_impl::__JniBaseClass arg0);
		void setStrict(jboolean arg0);
		void setTables(jstring arg0);
		void setTables(const QString &arg0);
		jint update(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3);
	};
} // namespace __jni_impl::android::database::sqlite

#include "../../content/ContentValues.hpp"
#include "SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../../java/lang/StringBuilder.hpp"

namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteQueryBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteQueryBuilder",
			"()V"
		);
	}
	
	// Methods
	void SQLiteQueryBuilder::appendColumns(__jni_impl::java::lang::StringBuilder arg0, jarray arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.sqlite.SQLiteQueryBuilder",
			"appendColumns",
			"(Ljava/lang/StringBuilder;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring SQLiteQueryBuilder::buildQueryString(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteQueryBuilder",
			"buildQueryString",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildQueryString(jboolean arg0, const QString &arg1, jarray arg2, const QString &arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteQueryBuilder",
			"buildQueryString",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			QAndroidJniObject::fromString(arg6).object<jstring>(),
			QAndroidJniObject::fromString(arg7).object<jstring>()
		).object<jstring>();
	}
	void SQLiteQueryBuilder::appendWhere(jstring arg0)
	{
		__thiz.callMethod<void>(
			"appendWhere",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::appendWhere(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"appendWhere",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SQLiteQueryBuilder::appendWhereEscapeString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"appendWhereEscapeString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::appendWhereEscapeString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"appendWhereEscapeString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SQLiteQueryBuilder::appendWhereStandalone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"appendWhereStandalone",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::appendWhereStandalone(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"appendWhereStandalone",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring SQLiteQueryBuilder::buildQuery(jarray arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5)
	{
		return __thiz.callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildQuery(jarray arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5)
	{
		return __thiz.callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>()
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildQuery(jarray arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6)
	{
		return __thiz.callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildQuery(jarray arg0, const QString &arg1, jarray arg2, const QString &arg3, const QString &arg4, const QString &arg5, const QString &arg6)
	{
		return __thiz.callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			QAndroidJniObject::fromString(arg6).object<jstring>()
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionQuery(jarray arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"buildUnionQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionQuery(jarray arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"buildUnionQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionSubQuery(jstring arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
	{
		return __thiz.callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionSubQuery(const QString &arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7)
	{
		return __thiz.callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			QAndroidJniObject::fromString(arg6).object<jstring>(),
			QAndroidJniObject::fromString(arg7).object<jstring>()
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionSubQuery(jstring arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jarray arg6, jstring arg7, jstring arg8)
	{
		return __thiz.callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionSubQuery(const QString &arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jint arg3, const QString &arg4, const QString &arg5, jarray arg6, const QString &arg7, const QString &arg8)
	{
		return __thiz.callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6,
			QAndroidJniObject::fromString(arg7).object<jstring>(),
			QAndroidJniObject::fromString(arg8).object<jstring>()
		).object<jstring>();
	}
	jint SQLiteQueryBuilder::_delete(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint SQLiteQueryBuilder::_delete(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::getCursorFactory()
	{
		return __thiz.callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::getProjectionMap()
	{
		return __thiz.callObjectMethod(
			"getProjectionMap",
			"()Ljava/util/Map;"
		);
	}
	jstring SQLiteQueryBuilder::getTables()
	{
		return __thiz.callObjectMethod(
			"getTables",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SQLiteQueryBuilder::isDistinct()
	{
		return __thiz.callMethod<jboolean>(
			"isDistinct",
			"()Z"
		);
	}
	jboolean SQLiteQueryBuilder::isStrict()
	{
		return __thiz.callMethod<jboolean>(
			"isStrict",
			"()Z"
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			QAndroidJniObject::fromString(arg6).object<jstring>()
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			QAndroidJniObject::fromString(arg6).object<jstring>(),
			QAndroidJniObject::fromString(arg7).object<jstring>()
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7, __jni_impl::android::os::CancellationSignal arg8)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteQueryBuilder::query(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7, __jni_impl::android::os::CancellationSignal arg8)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			QAndroidJniObject::fromString(arg6).object<jstring>(),
			QAndroidJniObject::fromString(arg7).object<jstring>(),
			arg8.__jniObject().object()
		);
	}
	void SQLiteQueryBuilder::setCursorFactory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCursorFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteQueryBuilder::setDistinct(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDistinct",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setProjectionMap(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setProjectionMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteQueryBuilder::setStrict(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStrict",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setTables(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTables",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setTables(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTables",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint SQLiteQueryBuilder::update(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint SQLiteQueryBuilder::update(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteQueryBuilder : public __jni_impl::android::database::sqlite::SQLiteQueryBuilder
	{
	public:
		SQLiteQueryBuilder(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteQueryBuilder()
		{
			__constructor();
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER

