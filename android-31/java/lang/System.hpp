#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class Console;
}
namespace java::io
{
	class FileOutputStream;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class PrintStream;
}
namespace java::lang
{
	class SecurityManager;
}
namespace java::util
{
	class Properties;
}
namespace java::util
{
	class ResourceBundle;
}

namespace java::lang
{
	class System : public JObject
	{
	public:
		// Fields
		static java::io::PrintStream err();
		static java::io::InputStream in();
		static java::io::PrintStream out();
		
		// QJniObject forward
		template<typename ...Ts> explicit System(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		System(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void arraycopy(jobject arg0, jint arg1, jobject arg2, jint arg3, jint arg4);
		static jstring clearProperty(jstring arg0);
		static java::io::Console console();
		static jlong currentTimeMillis();
		static void exit(jint arg0);
		static void gc();
		static JObject getLogger(jstring arg0);
		static JObject getLogger(jstring arg0, java::util::ResourceBundle arg1);
		static java::util::Properties getProperties();
		static jstring getProperty(jstring arg0);
		static jstring getProperty(jstring arg0, jstring arg1);
		static java::lang::SecurityManager getSecurityManager();
		static jstring getenv(jstring arg0);
		static JObject getenv();
		static jint identityHashCode(jobject arg0);
		static JObject inheritedChannel();
		static jstring lineSeparator();
		static void load(jstring arg0);
		static void loadLibrary(jstring arg0);
		static jstring mapLibraryName(jstring arg0);
		static jlong nanoTime();
		static void runFinalization();
		static void setErr(java::io::PrintStream arg0);
		static void setIn(java::io::InputStream arg0);
		static void setOut(java::io::PrintStream arg0);
		static void setProperties(java::util::Properties arg0);
		static jstring setProperty(jstring arg0, jstring arg1);
		static void setSecurityManager(java::lang::SecurityManager arg0);
	};
} // namespace java::lang

