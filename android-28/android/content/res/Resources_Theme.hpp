#pragma once

#include "../../../JIntArray.hpp"
#include "./Resources.def.hpp"
#include "./TypedArray.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../util/TypedValue.def.hpp"
#include "../../../JString.hpp"
#include "./Resources_Theme.def.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Resources_Theme::applyStyle(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"applyStyle",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void Resources_Theme::dump(jint arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"dump",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jint Resources_Theme::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable Resources_Theme::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline android::content::res::Resources Resources_Theme::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	inline android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(JIntArray arg0) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"([I)Landroid/content/res/TypedArray;",
			arg0.object<jintArray>()
		);
	}
	inline android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(jint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(I[I)Landroid/content/res/TypedArray;",
			arg0,
			arg1.object<jintArray>()
		);
	}
	inline android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(JObject arg0, JIntArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3
		);
	}
	inline jboolean Resources_Theme::resolveAttribute(jint arg0, android::util::TypedValue arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"resolveAttribute",
			"(ILandroid/util/TypedValue;Z)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline void Resources_Theme::setTo(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setTo",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
} // namespace android::content::res

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
