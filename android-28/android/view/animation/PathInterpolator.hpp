#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Path;
}

namespace android::view::animation
{
	class PathInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PathInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		PathInterpolator(QAndroidJniObject obj);
		
		// Constructors
		PathInterpolator(android::graphics::Path arg0);
		PathInterpolator(android::content::Context arg0, __JniBaseClass arg1);
		PathInterpolator(jfloat arg0, jfloat arg1);
		PathInterpolator(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation
