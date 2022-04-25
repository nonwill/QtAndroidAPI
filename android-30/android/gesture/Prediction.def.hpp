#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::gesture
{
	class Prediction : public JObject
	{
	public:
		// Fields
		JString name();
		jdouble score();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Prediction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Prediction(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString toString() const;
	};
} // namespace android::gesture
