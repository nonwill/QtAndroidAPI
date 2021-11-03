#pragma once

#include "./SQLiteProgram.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteQuery : public android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteQuery(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteProgram(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteQuery(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString toString();
	};
} // namespace android::database::sqlite

