#pragma once

#include "../../JObject.hpp"

class JString;

namespace java::util
{
	class LongSummaryStatistics : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LongSummaryStatistics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LongSummaryStatistics(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LongSummaryStatistics();
		LongSummaryStatistics(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		
		// Methods
		void accept(jint arg0) const;
		void accept(jlong arg0) const;
		void combine(java::util::LongSummaryStatistics arg0) const;
		jdouble getAverage() const;
		jlong getCount() const;
		jlong getMax() const;
		jlong getMin() const;
		jlong getSum() const;
		JString toString() const;
	};
} // namespace java::util
