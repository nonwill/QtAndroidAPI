#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Note : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString NOTE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Note(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Note(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider
