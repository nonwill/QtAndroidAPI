#pragma once

#include "./Animation.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::animation
{
	class Transformation;
}

namespace android::view::animation
{
	class AlphaAnimation : public android::view::animation::Animation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphaAnimation(const char *className, const char *sig, Ts...agv) : android::view::animation::Animation(className, sig, std::forward<Ts>(agv)...) {}
		AlphaAnimation(QAndroidJniObject obj) : android::view::animation::Animation(obj) {}
		
		// Constructors
		AlphaAnimation(android::content::Context arg0, JObject arg1);
		AlphaAnimation(jfloat arg0, jfloat arg1);
		
		// Methods
		jboolean willChangeBounds() const;
		jboolean willChangeTransformationMatrix() const;
	};
} // namespace android::view::animation
