#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseAdapter.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::widget
{
	class Filter;
}

namespace android::widget
{
	class CursorAdapter : public android::widget::BaseAdapter
	{
	public:
		// Fields
		static jint FLAG_AUTO_REQUERY();
		static jint FLAG_REGISTER_CONTENT_OBSERVER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseAdapter(className, sig, std::forward<Ts>(agv)...) {}
		CursorAdapter(QAndroidJniObject obj);
		
		// Constructors
		CursorAdapter(android::content::Context arg0, __JniBaseClass arg1);
		CursorAdapter(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2);
		CursorAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		
		// Methods
		void bindView(android::view::View arg0, android::content::Context arg1, __JniBaseClass arg2);
		void changeCursor(__JniBaseClass arg0);
		jstring convertToString(__JniBaseClass arg0);
		jint getCount();
		__JniBaseClass getCursor();
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		android::content::res::Resources_Theme getDropDownViewTheme();
		android::widget::Filter getFilter();
		__JniBaseClass getFilterQueryProvider();
		jobject getItem(jint arg0);
		jlong getItemId(jint arg0);
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		jboolean hasStableIds();
		android::view::View newDropDownView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2);
		android::view::View newView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2);
		__JniBaseClass runQueryOnBackgroundThread(jstring arg0);
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0);
		void setFilterQueryProvider(__JniBaseClass arg0);
		__JniBaseClass swapCursor(__JniBaseClass arg0);
	};
} // namespace android::widget
