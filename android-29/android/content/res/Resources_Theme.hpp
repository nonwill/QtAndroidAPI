#pragma once

#include "../../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::util
{
	class TypedValue;
}

namespace android::content::res
{
	class Resources_Theme : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Resources_Theme(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Resources_Theme(QJniObject obj);
		
		// Constructors
		
		// Methods
		void applyStyle(jint arg0, jboolean arg1);
		void dump(jint arg0, jstring arg1, jstring arg2);
		jintArray getAttributeResolutionStack(jint arg0, jint arg1, jint arg2);
		jint getChangingConfigurations();
		android::graphics::drawable::Drawable getDrawable(jint arg0);
		jint getExplicitStyle(JObject arg0);
		android::content::res::Resources getResources();
		android::content::res::TypedArray obtainStyledAttributes(jintArray arg0);
		android::content::res::TypedArray obtainStyledAttributes(jint arg0, jintArray arg1);
		android::content::res::TypedArray obtainStyledAttributes(JObject arg0, jintArray arg1, jint arg2, jint arg3);
		void rebase();
		jboolean resolveAttribute(jint arg0, android::util::TypedValue arg1, jboolean arg2);
		void setTo(android::content::res::Resources_Theme arg0);
	};
} // namespace android::content::res

