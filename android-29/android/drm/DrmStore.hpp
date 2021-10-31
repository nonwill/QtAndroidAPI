#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmStore(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore(QJniObject obj);
		
		// Constructors
		DrmStore();
		
		// Methods
	};
} // namespace android::drm

