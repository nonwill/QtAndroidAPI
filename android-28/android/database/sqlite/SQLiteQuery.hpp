#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./SQLiteClosable.hpp"
#include "./SQLiteProgram.hpp"

namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::os
{
	class CancellationSignal;
}

namespace android::database::sqlite
{
	class SQLiteQuery : public android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteQuery(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteProgram(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteQuery(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::database::sqlite
