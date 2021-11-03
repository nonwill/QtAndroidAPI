#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class SyncResult;
}

namespace android::content
{
	class SyncContext : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getSyncContextBinder() const;
		void onFinished(android::content::SyncResult arg0) const;
	};
} // namespace android::content

