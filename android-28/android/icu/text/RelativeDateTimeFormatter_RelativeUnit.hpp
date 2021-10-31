#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeUnit : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit DAYS();
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit HOURS();
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit MINUTES();
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit MONTHS();
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit QUARTERS();
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit SECONDS();
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit WEEKS();
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit YEARS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_RelativeUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_RelativeUnit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter_RelativeUnit valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text
