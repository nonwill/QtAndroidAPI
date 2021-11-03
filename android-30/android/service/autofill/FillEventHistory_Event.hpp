#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::service::autofill
{
	class FillEventHistory_Event : public JObject
	{
	public:
		// Fields
		static jint TYPE_AUTHENTICATION_SELECTED();
		static jint TYPE_CONTEXT_COMMITTED();
		static jint TYPE_DATASETS_SHOWN();
		static jint TYPE_DATASET_AUTHENTICATION_SELECTED();
		static jint TYPE_DATASET_SELECTED();
		static jint TYPE_SAVE_SHOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillEventHistory_Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillEventHistory_Event(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getChangedFields();
		android::os::Bundle getClientState();
		jstring getDatasetId();
		JObject getFieldsClassification();
		JObject getIgnoredDatasetIds();
		JObject getManuallyEnteredField();
		JObject getSelectedDatasetIds();
		jint getType();
		jstring toString();
	};
} // namespace android::service::autofill

