#pragma once

#include "./PathEffect.def.hpp"

class JFloatArray;

namespace android::graphics
{
	class DashPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DashPathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		DashPathEffect(QAndroidJniObject obj) : android::graphics::PathEffect(obj) {}
		
		// Constructors
		DashPathEffect(JFloatArray arg0, jfloat arg1);
		
		// Methods
	};
} // namespace android::graphics

