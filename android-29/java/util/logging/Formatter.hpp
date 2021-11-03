#pragma once

#include "../../../JObject.hpp"

namespace java::util::logging
{
	class Handler;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class Formatter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring format(java::util::logging::LogRecord arg0);
		jstring formatMessage(java::util::logging::LogRecord arg0);
		jstring getHead(java::util::logging::Handler arg0);
		jstring getTail(java::util::logging::Handler arg0);
	};
} // namespace java::util::logging

