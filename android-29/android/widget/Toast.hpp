#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class Toast : public __JniBaseClass
	{
	public:
		// Fields
		static jint LENGTH_LONG();
		static jint LENGTH_SHORT();
		
		Toast(QAndroidJniObject obj);
		// Constructors
		Toast(android::content::Context &arg0);
		Toast() = default;
		
		// Methods
		static QAndroidJniObject makeText(android::content::Context arg0, jint arg1, jint arg2);
		static QAndroidJniObject makeText(android::content::Context arg0, jstring arg1, jint arg2);
		static QAndroidJniObject makeText(android::content::Context arg0, const QString &arg1, jint arg2);
		void cancel();
		jint getDuration();
		jint getGravity();
		jfloat getHorizontalMargin();
		jfloat getVerticalMargin();
		QAndroidJniObject getView();
		jint getXOffset();
		jint getYOffset();
		void setDuration(jint arg0);
		void setGravity(jint arg0, jint arg1, jint arg2);
		void setMargin(jfloat arg0, jfloat arg1);
		void setText(jint arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setView(android::view::View arg0);
		void show();
	};
} // namespace android::widget

