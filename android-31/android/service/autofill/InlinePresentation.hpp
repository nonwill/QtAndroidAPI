#pragma once

#include "../../../JObject.hpp"

namespace android::app::slice
{
	class Slice;
}
namespace android::os
{
	class Parcel;
}
namespace android::widget::inline
{
	class InlinePresentationSpec;
}
class JObject;
class JString;

namespace android::service::autofill
{
	class InlinePresentation : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlinePresentation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlinePresentation(QAndroidJniObject obj);
		
		// Constructors
		InlinePresentation(android::app::slice::Slice arg0, android::widget::inline::InlinePresentationSpec arg1, jboolean arg2);
		
		// Methods
		static android::service::autofill::InlinePresentation createTooltipPresentation(android::app::slice::Slice arg0, android::widget::inline::InlinePresentationSpec arg1);
		jint describeContents();
		jboolean equals(JObject arg0);
		android::widget::inline::InlinePresentationSpec getInlinePresentationSpec();
		android::app::slice::Slice getSlice();
		jint hashCode();
		jboolean isPinned();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

