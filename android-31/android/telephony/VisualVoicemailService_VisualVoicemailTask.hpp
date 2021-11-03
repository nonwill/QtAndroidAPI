#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailService_VisualVoicemailTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailService_VisualVoicemailTask(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		void finish() const;
		jint hashCode() const;
	};
} // namespace android::telephony

