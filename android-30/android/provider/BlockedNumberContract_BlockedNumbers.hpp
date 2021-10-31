#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class BlockedNumberContract_BlockedNumbers : public __JniBaseClass
	{
	public:
		// Fields
		static jstring COLUMN_E164_NUMBER();
		static jstring COLUMN_ID();
		static jstring COLUMN_ORIGINAL_NUMBER();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlockedNumberContract_BlockedNumbers(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BlockedNumberContract_BlockedNumbers(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider
