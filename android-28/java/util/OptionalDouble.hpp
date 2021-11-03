#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class OptionalDouble : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OptionalDouble(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OptionalDouble(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::OptionalDouble empty();
		static java::util::OptionalDouble of(jdouble arg0);
		jboolean equals(JObject arg0);
		jdouble getAsDouble();
		jint hashCode();
		void ifPresent(JObject arg0);
		void ifPresentOrElse(JObject arg0, JObject arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jdouble orElse(jdouble arg0);
		jdouble orElseGet(JObject arg0);
		jdouble orElseThrow();
		jdouble orElseThrow(JObject arg0);
		JObject stream();
		JString toString();
	};
} // namespace java::util

