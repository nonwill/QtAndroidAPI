#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}

namespace android::widget
{
	class AbsoluteLayout_LayoutParams : public android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		jint x();
		jint y();
		
		AbsoluteLayout_LayoutParams(QAndroidJniObject obj);
		// Constructors
		AbsoluteLayout_LayoutParams(android::view::ViewGroup_LayoutParams &arg0);
		AbsoluteLayout_LayoutParams(android::content::Context &arg0, __JniBaseClass &arg1);
		AbsoluteLayout_LayoutParams(jint &arg0, jint &arg1, jint &arg2, jint &arg3);
		AbsoluteLayout_LayoutParams() = default;
		
		// Methods
		jstring debug(jstring arg0);
		jstring debug(const QString &arg0);
	};
} // namespace android::widget

