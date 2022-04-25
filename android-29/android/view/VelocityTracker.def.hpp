#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class MotionEvent;
}
class JString;

namespace android::view
{
	class VelocityTracker : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VelocityTracker(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VelocityTracker(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::VelocityTracker obtain();
		void addMovement(android::view::MotionEvent arg0) const;
		void clear() const;
		void computeCurrentVelocity(jint arg0) const;
		void computeCurrentVelocity(jint arg0, jfloat arg1) const;
		jfloat getXVelocity() const;
		jfloat getXVelocity(jint arg0) const;
		jfloat getYVelocity() const;
		jfloat getYVelocity(jint arg0) const;
		void recycle() const;
	};
} // namespace android::view
