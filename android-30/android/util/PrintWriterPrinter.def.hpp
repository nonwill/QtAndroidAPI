#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class PrintWriter;
}
class JString;

namespace android::util
{
	class PrintWriterPrinter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintWriterPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintWriterPrinter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PrintWriterPrinter(java::io::PrintWriter arg0);
		
		// Methods
		void println(JString arg0) const;
	};
} // namespace android::util
