#pragma once


namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class DoubleAdder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DoubleAdder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DoubleAdder(QAndroidJniObject obj);
		
		// Constructors
		DoubleAdder();
		
		// Methods
		void add(jdouble arg0);
		jdouble doubleValue();
		jfloat floatValue();
		jint intValue();
		jlong longValue();
		void reset();
		jdouble sum();
		jdouble sumThenReset();
		JString toString();
	};
} // namespace java::util::concurrent::atomic

