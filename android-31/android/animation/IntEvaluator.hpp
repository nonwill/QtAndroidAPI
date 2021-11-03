#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Integer;
}

namespace android::animation
{
	class IntEvaluator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntEvaluator(QJniObject obj);
		
		// Constructors
		IntEvaluator();
		
		// Methods
		java::lang::Integer evaluate(jfloat arg0, java::lang::Integer arg1, java::lang::Integer arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

