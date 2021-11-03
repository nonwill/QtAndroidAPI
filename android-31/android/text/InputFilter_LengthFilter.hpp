#pragma once

#include "../../JObject.hpp"


namespace android::text
{
	class InputFilter_LengthFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputFilter_LengthFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputFilter_LengthFilter(QJniObject obj);
		
		// Constructors
		InputFilter_LengthFilter(jint arg0);
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5);
		jint getMax();
	};
} // namespace android::text

