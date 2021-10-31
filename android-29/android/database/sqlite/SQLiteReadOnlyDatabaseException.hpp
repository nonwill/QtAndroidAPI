#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteReadOnlyDatabaseException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteReadOnlyDatabaseException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteReadOnlyDatabaseException(QJniObject obj);
		
		// Constructors
		SQLiteReadOnlyDatabaseException();
		SQLiteReadOnlyDatabaseException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

