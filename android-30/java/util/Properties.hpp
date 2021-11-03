#pragma once

#include "../../JObject.hpp"
#include "./Dictionary.hpp"
#include "./Hashtable.hpp"

namespace java::io
{
	class BufferedWriter;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}
namespace java::io
{
	class Reader;
}
namespace java::io
{
	class Writer;
}
namespace java::lang
{
	class StringBuilder;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::util
{
	class Properties : public java::util::Hashtable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Properties(const char *className, const char *sig, Ts...agv) : java::util::Hashtable(className, sig, std::forward<Ts>(agv)...) {}
		Properties(QJniObject obj);
		
		// Constructors
		Properties();
		Properties(jint arg0);
		Properties(java::util::Properties &arg0);
		
		// Methods
		void clear();
		jobject clone();
		jobject compute(jobject arg0, JObject arg1);
		jobject computeIfAbsent(jobject arg0, JObject arg1);
		jobject computeIfPresent(jobject arg0, JObject arg1);
		jboolean contains(jobject arg0);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		JObject elements();
		JObject entrySet();
		jboolean equals(jobject arg0);
		void forEach(JObject arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		jstring getProperty(jstring arg0);
		jstring getProperty(jstring arg0, jstring arg1);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		JObject keys();
		void list(java::io::PrintStream arg0);
		void list(java::io::PrintWriter arg0);
		void load(java::io::InputStream arg0);
		void load(java::io::Reader arg0);
		void loadFromXML(java::io::InputStream arg0);
		jobject merge(jobject arg0, jobject arg1, JObject arg2);
		JObject propertyNames();
		jobject put(jobject arg0, jobject arg1);
		void putAll(JObject arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(JObject arg0);
		void save(java::io::OutputStream arg0, jstring arg1);
		jobject setProperty(jstring arg0, jstring arg1);
		jint size();
		void store(java::io::OutputStream arg0, jstring arg1);
		void store(java::io::Writer arg0, jstring arg1);
		void storeToXML(java::io::OutputStream arg0, jstring arg1);
		void storeToXML(java::io::OutputStream arg0, jstring arg1, jstring arg2);
		void storeToXML(java::io::OutputStream arg0, jstring arg1, java::nio::charset::Charset arg2);
		JObject stringPropertyNames();
		jstring toString();
		JObject values();
	};
} // namespace java::util

