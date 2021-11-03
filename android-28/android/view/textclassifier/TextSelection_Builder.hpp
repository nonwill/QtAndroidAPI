#pragma once

#include "../../../JObject.hpp"

namespace android::view::textclassifier
{
	class TextSelection;
}
class JString;

namespace android::view::textclassifier
{
	class TextSelection_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextSelection_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextSelection_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextSelection_Builder(jint arg0, jint arg1);
		
		// Methods
		android::view::textclassifier::TextSelection build();
		android::view::textclassifier::TextSelection_Builder setEntityType(JString arg0, jfloat arg1);
		android::view::textclassifier::TextSelection_Builder setId(JString arg0);
	};
} // namespace android::view::textclassifier

