#pragma once

#include "./TextClassifierEvent.def.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent_Builder;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextSelectionEvent(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextSelectionEvent(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
		
		// Constructors
		
		// Methods
		jint getRelativeSuggestedWordEndIndex() const;
		jint getRelativeSuggestedWordStartIndex() const;
		jint getRelativeWordEndIndex() const;
		jint getRelativeWordStartIndex() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier
