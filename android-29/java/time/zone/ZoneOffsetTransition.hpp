#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
	class LocalDateTime;
}
namespace java::time
{
	class ZoneOffset;
}

namespace java::time::zone
{
	class ZoneOffsetTransition : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneOffsetTransition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffsetTransition(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::zone::ZoneOffsetTransition of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2);
		jint compareTo(JObject arg0);
		jint compareTo(java::time::zone::ZoneOffsetTransition arg0);
		jboolean equals(JObject arg0);
		java::time::LocalDateTime getDateTimeAfter();
		java::time::LocalDateTime getDateTimeBefore();
		java::time::Duration getDuration();
		java::time::Instant getInstant();
		java::time::ZoneOffset getOffsetAfter();
		java::time::ZoneOffset getOffsetBefore();
		jint hashCode();
		jboolean isGap();
		jboolean isOverlap();
		jboolean isValidOffset(java::time::ZoneOffset arg0);
		jlong toEpochSecond();
		JString toString();
	};
} // namespace java::time::zone

