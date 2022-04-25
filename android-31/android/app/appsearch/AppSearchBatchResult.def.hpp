#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class AppSearchBatchResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchBatchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchBatchResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAll() const;
		JObject getFailures() const;
		JObject getSuccesses() const;
		jboolean isSuccess() const;
		JString toString() const;
	};
} // namespace android::app::appsearch
