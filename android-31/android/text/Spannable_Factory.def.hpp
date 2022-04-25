#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::text
{
	class Spannable_Factory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spannable_Factory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Spannable_Factory(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Spannable_Factory();
		
		// Methods
		static android::text::Spannable_Factory getInstance();
		JObject newSpannable(JString arg0) const;
	};
} // namespace android::text
