#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebHistoryItem;
}

namespace __jni_impl::android::webkit
{
	class WebBackForwardList : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getCurrentIndex();
		QAndroidJniObject getCurrentItem();
		QAndroidJniObject getItemAtIndex(jint arg0);
		jint getSize();
	};
} // namespace __jni_impl::android::webkit

#include "./WebHistoryItem.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebBackForwardList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebBackForwardList",
			"()V"
		);
	}
	
	// Methods
	jint WebBackForwardList::getCurrentIndex()
	{
		return __thiz.callMethod<jint>(
			"getCurrentIndex",
			"()I"
		);
	}
	QAndroidJniObject WebBackForwardList::getCurrentItem()
	{
		return __thiz.callObjectMethod(
			"getCurrentItem",
			"()Landroid/webkit/WebHistoryItem;"
		);
	}
	QAndroidJniObject WebBackForwardList::getItemAtIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItemAtIndex",
			"(I)Landroid/webkit/WebHistoryItem;",
			arg0
		);
	}
	jint WebBackForwardList::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebBackForwardList : public __jni_impl::android::webkit::WebBackForwardList
	{
	public:
		WebBackForwardList(QAndroidJniObject obj) { __thiz = obj; }
		WebBackForwardList()
		{
			__constructor();
		}
	};
} // namespace android::webkit

