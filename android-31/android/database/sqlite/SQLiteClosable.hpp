#pragma once

#include "../../../JObject.hpp"

namespace android::database::sqlite
{
	class SQLiteClosable : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteClosable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteClosable(QJniObject obj);
		
		// Constructors
		SQLiteClosable();
		
		// Methods
		void acquireReference();
		void close();
		void releaseReference();
		void releaseReferenceFromContainer();
	};
} // namespace android::database::sqlite

