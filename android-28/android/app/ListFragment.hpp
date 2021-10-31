#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Fragment.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class LayoutInflater;
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
	class ListView;
}

namespace android::app
{
	class ListFragment : public android::app::Fragment
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListFragment(const char *className, const char *sig, Ts...agv) : android::app::Fragment(className, sig, std::forward<Ts>(agv)...) {}
		ListFragment(QAndroidJniObject obj);
		
		// Constructors
		ListFragment();
		
		// Methods
		__JniBaseClass getListAdapter();
		android::widget::ListView getListView();
		jlong getSelectedItemId();
		jint getSelectedItemPosition();
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2);
		void onDestroyView();
		void onListItemClick(android::widget::ListView arg0, android::view::View arg1, jint arg2, jlong arg3);
		void onViewCreated(android::view::View arg0, android::os::Bundle arg1);
		void setEmptyText(jstring arg0);
		void setListAdapter(__JniBaseClass arg0);
		void setListShown(jboolean arg0);
		void setListShownNoAnimation(jboolean arg0);
		void setSelection(jint arg0);
	};
} // namespace android::app
