#pragma once

#include "../../JObject.hpp"

class JObject;
namespace java::util
{
	class ArrayList;
}

namespace android::database
{
	class Observable : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Observable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Observable(QAndroidJniObject obj);
		
		// Constructors
		Observable();
		
		// Methods
		void registerObserver(JObject arg0);
		void unregisterAll();
		void unregisterObserver(JObject arg0);
	};
} // namespace android::database

