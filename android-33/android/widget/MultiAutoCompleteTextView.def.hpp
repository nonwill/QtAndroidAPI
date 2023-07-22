#pragma once

#include "./AutoCompleteTextView.def.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::widget
{
	class MultiAutoCompleteTextView : public android::widget::AutoCompleteTextView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiAutoCompleteTextView(const char *className, const char *sig, Ts...agv) : android::widget::AutoCompleteTextView(className, sig, std::forward<Ts>(agv)...) {}
		MultiAutoCompleteTextView(QAndroidJniObject obj) : android::widget::AutoCompleteTextView(obj) {}
		
		// Constructors
		MultiAutoCompleteTextView(android::content::Context arg0);
		MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1);
		MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2);
		MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean enoughToFilter() const;
		JString getAccessibilityClassName() const;
		void performValidation() const;
		void setTokenizer(JObject arg0) const;
	};
} // namespace android::widget

