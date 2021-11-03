#pragma once

#include "./ResourceCursorAdapter.hpp"

class JIntArray;
class JArray;
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
class JString;
class JString;

namespace android::widget
{
	class SimpleCursorAdapter : public android::widget::ResourceCursorAdapter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SimpleCursorAdapter(const char *className, const char *sig, Ts...agv) : android::widget::ResourceCursorAdapter(className, sig, std::forward<Ts>(agv)...) {}
		SimpleCursorAdapter(QJniObject obj);
		
		// Constructors
		SimpleCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, JArray arg3, JIntArray arg4);
		SimpleCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, JArray arg3, JIntArray arg4, jint arg5);
		
		// Methods
		void bindView(android::view::View arg0, android::content::Context arg1, JObject arg2);
		void changeCursorAndColumns(JObject arg0, JArray arg1, JIntArray arg2);
		JString convertToString(JObject arg0);
		JObject getCursorToStringConverter();
		jint getStringConversionColumn();
		JObject getViewBinder();
		void setCursorToStringConverter(JObject arg0);
		void setStringConversionColumn(jint arg0);
		void setViewBinder(JObject arg0);
		void setViewImage(android::widget::ImageView arg0, JString arg1);
		void setViewText(android::widget::TextView arg0, JString arg1);
		JObject swapCursor(JObject arg0);
	};
} // namespace android::widget

