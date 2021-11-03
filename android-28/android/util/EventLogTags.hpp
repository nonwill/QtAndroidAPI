#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class EventLogTags_Description;
}
namespace java::io
{
	class BufferedReader;
}

namespace android::util
{
	class EventLogTags : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLogTags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLogTags(QJniObject obj);
		
		// Constructors
		EventLogTags();
		EventLogTags(java::io::BufferedReader arg0);
		
		// Methods
		android::util::EventLogTags_Description get(jint arg0);
		android::util::EventLogTags_Description get(jstring arg0);
	};
} // namespace android::util

