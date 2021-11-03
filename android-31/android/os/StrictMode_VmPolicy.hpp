#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class StrictMode_VmPolicy : public JObject
	{
	public:
		// Fields
		static android::os::StrictMode_VmPolicy LAX();
		
		// QJniObject forward
		template<typename ...Ts> explicit StrictMode_VmPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_VmPolicy(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::os

