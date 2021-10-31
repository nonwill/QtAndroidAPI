#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class ZoneId;
}

namespace java::time
{
	class Clock : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Clock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Clock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::Clock fixed(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::Clock offset(java::time::Clock arg0, java::time::Duration arg1);
		static java::time::Clock system(java::time::ZoneId arg0);
		static java::time::Clock systemDefaultZone();
		static java::time::Clock systemUTC();
		static java::time::Clock tick(java::time::Clock arg0, java::time::Duration arg1);
		static java::time::Clock tickMillis(java::time::ZoneId arg0);
		static java::time::Clock tickMinutes(java::time::ZoneId arg0);
		static java::time::Clock tickSeconds(java::time::ZoneId arg0);
		jboolean equals(jobject arg0);
		java::time::ZoneId getZone();
		jint hashCode();
		java::time::Instant instant();
		jlong millis();
		java::time::Clock withZone(java::time::ZoneId arg0);
	};
} // namespace java::time
