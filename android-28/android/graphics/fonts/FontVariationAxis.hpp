#pragma once

#include "../../../JObject.hpp"


namespace android::graphics::fonts
{
	class FontVariationAxis : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FontVariationAxis(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontVariationAxis(QJniObject obj);
		
		// Constructors
		FontVariationAxis(jstring arg0, jfloat arg1);
		
		// Methods
		static jarray fromFontVariationSettings(jstring arg0);
		static jstring toFontVariationSettings(jarray arg0);
		jfloat getStyleValue();
		jstring getTag();
		jstring toString();
	};
} // namespace android::graphics::fonts

