#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AppSearchSchema_PropertyConfig.hpp"


namespace android::app::appsearch
{
	class AppSearchSchema_DoublePropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DoublePropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DoublePropertyConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::app::appsearch
