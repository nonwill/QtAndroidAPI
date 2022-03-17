#pragma once

#include "./SQLiteException.def.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteDatabaseCorruptException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteDatabaseCorruptException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabaseCorruptException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteDatabaseCorruptException();
		SQLiteDatabaseCorruptException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

