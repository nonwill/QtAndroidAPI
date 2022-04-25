#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext;
}

namespace android::app::appsearch
{
	class AppSearchManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void createGlobalSearchSession(JObject arg0, JObject arg1) const;
		void createSearchSession(android::app::appsearch::AppSearchManager_SearchContext arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::app::appsearch
