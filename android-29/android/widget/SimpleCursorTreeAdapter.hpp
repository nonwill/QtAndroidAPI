#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseExpandableListAdapter.hpp"
#include "./CursorTreeAdapter.hpp"
#include "./ResourceCursorTreeAdapter.hpp"

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
	class ImageView;
}
namespace android::widget
{
	class TextView;
}

namespace android::widget
{
	class SimpleCursorTreeAdapter : public android::widget::ResourceCursorTreeAdapter
	{
	public:
		// Fields
		
		SimpleCursorTreeAdapter(QAndroidJniObject obj);
		// Constructors
		SimpleCursorTreeAdapter(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jarray &arg3, jintArray &arg4, jint &arg5, jarray &arg6, jintArray &arg7);
		SimpleCursorTreeAdapter(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3, jarray &arg4, jintArray &arg5, jint &arg6, jarray &arg7, jintArray &arg8);
		SimpleCursorTreeAdapter(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3, jarray &arg4, jintArray &arg5, jint &arg6, jint &arg7, jarray &arg8, jintArray &arg9);
		SimpleCursorTreeAdapter() = default;
		
		// Methods
		QAndroidJniObject getViewBinder();
		void setViewBinder(__JniBaseClass arg0);
		void setViewText(android::widget::TextView arg0, jstring arg1);
		void setViewText(android::widget::TextView arg0, const QString &arg1);
	};
} // namespace android::widget

