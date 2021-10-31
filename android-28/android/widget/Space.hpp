#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}

namespace android::widget
{
	class Space : public android::view::View
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Space(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		Space(QAndroidJniObject obj);
		
		// Constructors
		Space(android::content::Context arg0);
		Space(android::content::Context arg0, __JniBaseClass arg1);
		Space(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		Space(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0);
	};
} // namespace android::widget
