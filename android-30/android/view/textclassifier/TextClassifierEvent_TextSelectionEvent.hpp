#pragma once

#include "./TextClassifierEvent.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextSelectionEvent(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextSelectionEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getRelativeSuggestedWordEndIndex();
		jint getRelativeSuggestedWordStartIndex();
		jint getRelativeWordEndIndex();
		jint getRelativeWordStartIndex();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

