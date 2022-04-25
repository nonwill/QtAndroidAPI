#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::system
{
	class Int64Ref : public JObject
	{
	public:
		// Fields
		jlong value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Int64Ref(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Int64Ref(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Int64Ref(jlong arg0);
		
		// Methods
		JString toString() const;
	};
} // namespace android::system
