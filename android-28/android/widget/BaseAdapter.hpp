#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::database
{
	class DataSetObserver;
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
	class BaseAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseAdapter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BaseAdapter(QAndroidJniObject obj);
		
		// Constructors
		BaseAdapter();
		
		// Methods
		jboolean areAllItemsEnabled();
		jarray getAutofillOptions();
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		jint getItemViewType(jint arg0);
		jint getViewTypeCount();
		jboolean hasStableIds();
		jboolean isEmpty();
		jboolean isEnabled(jint arg0);
		void notifyDataSetChanged();
		void notifyDataSetInvalidated();
		void registerDataSetObserver(android::database::DataSetObserver arg0);
		void setAutofillOptions(jarray arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::widget
