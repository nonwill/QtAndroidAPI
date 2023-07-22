#pragma once

#include "../util/AndroidException.def.hpp"

namespace java::lang
{
	class Exception;
}
class JString;

namespace android::content
{
	class IntentSender_SendIntentException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntentSender_SendIntentException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		IntentSender_SendIntentException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
		
		// Constructors
		IntentSender_SendIntentException();
		IntentSender_SendIntentException(java::lang::Exception arg0);
		IntentSender_SendIntentException(JString arg0);
		
		// Methods
	};
} // namespace android::content

