#pragma once

#include "../util/Date.hpp"

class JCharArray;
class JString;
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDate;
}

namespace java::sql
{
	class Date : public java::util::Date
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Date(const char *className, const char *sig, Ts...agv) : java::util::Date(className, sig, std::forward<Ts>(agv)...) {}
		Date(QAndroidJniObject obj);
		
		// Constructors
		Date(jlong arg0);
		Date(jint arg0, jint arg1, jint arg2);
		
		// Methods
		static java::sql::Date valueOf(JString arg0);
		static java::sql::Date valueOf(java::time::LocalDate arg0);
		jint getHours();
		jint getMinutes();
		jint getSeconds();
		void setHours(jint arg0);
		void setMinutes(jint arg0);
		void setSeconds(jint arg0);
		void setTime(jlong arg0);
		java::time::Instant toInstant();
		java::time::LocalDate toLocalDate();
		JString toString();
	};
} // namespace java::sql

