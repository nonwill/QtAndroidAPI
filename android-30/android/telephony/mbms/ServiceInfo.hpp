#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::telephony::mbms
{
	class ServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServiceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getLocales();
		jstring getNameForLocale(java::util::Locale arg0);
		__JniBaseClass getNamedContentLocales();
		jstring getServiceClassName();
		jstring getServiceId();
		java::util::Date getSessionEndTime();
		java::util::Date getSessionStartTime();
		jint hashCode();
	};
} // namespace android::telephony::mbms

