#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class LocaleData_PaperSize : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleData_PaperSize(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocaleData_PaperSize(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getHeight();
		jint getWidth();
	};
} // namespace android::icu::util
