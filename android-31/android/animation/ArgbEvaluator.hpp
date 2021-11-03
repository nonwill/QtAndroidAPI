#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::animation
{
	class ArgbEvaluator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArgbEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ArgbEvaluator(QAndroidJniObject obj);
		
		// Constructors
		ArgbEvaluator();
		
		// Methods
		JObject evaluate(jfloat arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::animation

