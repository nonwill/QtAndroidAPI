#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Im : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CUSTOM_PROTOCOL();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring PROTOCOL();
		static jint PROTOCOL_AIM();
		static jint PROTOCOL_CUSTOM();
		static jint PROTOCOL_GOOGLE_TALK();
		static jint PROTOCOL_ICQ();
		static jint PROTOCOL_JABBER();
		static jint PROTOCOL_MSN();
		static jint PROTOCOL_NETMEETING();
		static jint PROTOCOL_QQ();
		static jint PROTOCOL_SKYPE();
		static jint PROTOCOL_YAHOO();
		static jint TYPE_HOME();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Im(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Im(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getProtocolLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getProtocolLabelResource(jint arg0);
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider
