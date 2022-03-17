#pragma once

#include "../database/ContentObserver.def.hpp"

namespace android::content
{
	class Loader;
}

namespace android::content
{
	class Loader_ForceLoadContentObserver : public android::database::ContentObserver
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Loader_ForceLoadContentObserver(const char *className, const char *sig, Ts...agv) : android::database::ContentObserver(className, sig, std::forward<Ts>(agv)...) {}
		Loader_ForceLoadContentObserver(QAndroidJniObject obj) : android::database::ContentObserver(obj) {}
		
		// Constructors
		Loader_ForceLoadContentObserver(android::content::Loader arg0);
		
		// Methods
		jboolean deliverSelfNotifications() const;
		void onChange(jboolean arg0) const;
	};
} // namespace android::content

