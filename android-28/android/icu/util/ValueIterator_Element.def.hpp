#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::icu::util
{
	class ValueIterator_Element : public JObject
	{
	public:
		// Fields
		jint integer();
		JObject value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ValueIterator_Element(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ValueIterator_Element(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ValueIterator_Element();
		
		// Methods
	};
} // namespace android::icu::util
