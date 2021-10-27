#pragma once

#include "../../__JniBaseClass.hpp"
#include "../text/ClipboardManager.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ClipDescription;
}

namespace android::content
{
	class ClipboardManager : public android::text::ClipboardManager
	{
	public:
		// Fields
		
		ClipboardManager(QAndroidJniObject obj);
		// Constructors
		ClipboardManager() = default;
		
		// Methods
		void addPrimaryClipChangedListener(__JniBaseClass arg0);
		void clearPrimaryClip();
		QAndroidJniObject getPrimaryClip();
		QAndroidJniObject getPrimaryClipDescription();
		jstring getText();
		jboolean hasPrimaryClip();
		jboolean hasText();
		void removePrimaryClipChangedListener(__JniBaseClass arg0);
		void setPrimaryClip(android::content::ClipData arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
	};
} // namespace android::content

