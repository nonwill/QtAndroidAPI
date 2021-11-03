#include "../graphics/drawable/Icon.hpp"
#include "../../JString.hpp"
#include "./ContentResolver_MimeTypeInfo.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentResolver_MimeTypeInfo::ContentResolver_MimeTypeInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ContentResolver_MimeTypeInfo::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Icon ContentResolver_MimeTypeInfo::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString ContentResolver_MimeTypeInfo::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::content

