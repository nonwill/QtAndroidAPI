#pragma once

#include "./TextClassifierEvent_ConversationActionsEvent.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassifierEvent_ConversationActionsEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent.hpp"

