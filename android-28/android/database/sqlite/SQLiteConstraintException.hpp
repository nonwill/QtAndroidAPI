#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteConstraintException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteConstraintException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteConstraintException(QAndroidJniObject obj);
		
		// Constructors
		SQLiteConstraintException();
		SQLiteConstraintException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

