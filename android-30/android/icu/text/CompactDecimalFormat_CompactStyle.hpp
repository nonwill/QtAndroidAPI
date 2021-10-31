#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class CompactDecimalFormat_CompactStyle : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::CompactDecimalFormat_CompactStyle LONG();
		static android::icu::text::CompactDecimalFormat_CompactStyle SHORT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CompactDecimalFormat_CompactStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CompactDecimalFormat_CompactStyle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::CompactDecimalFormat_CompactStyle valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

