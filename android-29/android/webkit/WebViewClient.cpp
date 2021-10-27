#include "../graphics/Bitmap.hpp"
#include "../net/http/SslError.hpp"
#include "../os/Message.hpp"
#include "../view/KeyEvent.hpp"
#include "./ClientCertRequest.hpp"
#include "./HttpAuthHandler.hpp"
#include "./RenderProcessGoneDetail.hpp"
#include "./SafeBrowsingResponse.hpp"
#include "./SslErrorHandler.hpp"
#include "./WebResourceError.hpp"
#include "./WebResourceResponse.hpp"
#include "./WebView.hpp"
#include "./WebViewClient.hpp"

namespace android::webkit
{
	// Fields
	jint WebViewClient::ERROR_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_AUTHENTICATION"
		);
	}
	jint WebViewClient::ERROR_BAD_URL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_BAD_URL"
		);
	}
	jint WebViewClient::ERROR_CONNECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_CONNECT"
		);
	}
	jint WebViewClient::ERROR_FAILED_SSL_HANDSHAKE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FAILED_SSL_HANDSHAKE"
		);
	}
	jint WebViewClient::ERROR_FILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FILE"
		);
	}
	jint WebViewClient::ERROR_FILE_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FILE_NOT_FOUND"
		);
	}
	jint WebViewClient::ERROR_HOST_LOOKUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_HOST_LOOKUP"
		);
	}
	jint WebViewClient::ERROR_IO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_IO"
		);
	}
	jint WebViewClient::ERROR_PROXY_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_PROXY_AUTHENTICATION"
		);
	}
	jint WebViewClient::ERROR_REDIRECT_LOOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_REDIRECT_LOOP"
		);
	}
	jint WebViewClient::ERROR_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_TIMEOUT"
		);
	}
	jint WebViewClient::ERROR_TOO_MANY_REQUESTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_TOO_MANY_REQUESTS"
		);
	}
	jint WebViewClient::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNKNOWN"
		);
	}
	jint WebViewClient::ERROR_UNSAFE_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSAFE_RESOURCE"
		);
	}
	jint WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSUPPORTED_AUTH_SCHEME"
		);
	}
	jint WebViewClient::ERROR_UNSUPPORTED_SCHEME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSUPPORTED_SCHEME"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_BILLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_BILLING"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_MALWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_MALWARE"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_PHISHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_PHISHING"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_UNKNOWN"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE"
		);
	}
	
	WebViewClient::WebViewClient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebViewClient::WebViewClient()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewClient",
			"()V"
		);
	}
	
	// Methods
	void WebViewClient::doUpdateVisitedHistory(android::webkit::WebView arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"doUpdateVisitedHistory",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void WebViewClient::doUpdateVisitedHistory(android::webkit::WebView arg0, const QString &arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"doUpdateVisitedHistory",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void WebViewClient::onFormResubmission(android::webkit::WebView arg0, android::os::Message arg1, android::os::Message arg2)
	{
		__thiz.callMethod<void>(
			"onFormResubmission",
			"(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onLoadResource(android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onLoadResource",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebViewClient::onLoadResource(android::webkit::WebView arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onLoadResource",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void WebViewClient::onPageCommitVisible(android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onPageCommitVisible",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebViewClient::onPageCommitVisible(android::webkit::WebView arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onPageCommitVisible",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void WebViewClient::onPageFinished(android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onPageFinished",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebViewClient::onPageFinished(android::webkit::WebView arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onPageFinished",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void WebViewClient::onPageStarted(android::webkit::WebView arg0, jstring arg1, android::graphics::Bitmap arg2)
	{
		__thiz.callMethod<void>(
			"onPageStarted",
			"(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onPageStarted(android::webkit::WebView arg0, const QString &arg1, android::graphics::Bitmap arg2)
	{
		__thiz.callMethod<void>(
			"onPageStarted",
			"(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedClientCertRequest(android::webkit::WebView arg0, android::webkit::ClientCertRequest arg1)
	{
		__thiz.callMethod<void>(
			"onReceivedClientCertRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/ClientCertRequest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedError(android::webkit::WebView arg0, __JniBaseClass arg1, android::webkit::WebResourceError arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedError",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedError(android::webkit::WebView arg0, jint arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedError",
			"(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void WebViewClient::onReceivedError(android::webkit::WebView arg0, jint arg1, const QString &arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedError",
			"(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void WebViewClient::onReceivedHttpAuthRequest(android::webkit::WebView arg0, android::webkit::HttpAuthHandler arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedHttpAuthRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void WebViewClient::onReceivedHttpAuthRequest(android::webkit::WebView arg0, android::webkit::HttpAuthHandler arg1, const QString &arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedHttpAuthRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void WebViewClient::onReceivedHttpError(android::webkit::WebView arg0, __JniBaseClass arg1, android::webkit::WebResourceResponse arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedHttpError",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceResponse;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedLoginRequest(android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedLoginRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void WebViewClient::onReceivedLoginRequest(android::webkit::WebView arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedLoginRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void WebViewClient::onReceivedSslError(android::webkit::WebView arg0, android::webkit::SslErrorHandler arg1, android::net::http::SslError arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedSslError",
			"(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean WebViewClient::onRenderProcessGone(android::webkit::WebView arg0, android::webkit::RenderProcessGoneDetail arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onRenderProcessGone",
			"(Landroid/webkit/WebView;Landroid/webkit/RenderProcessGoneDetail;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewClient::onSafeBrowsingHit(android::webkit::WebView arg0, __JniBaseClass arg1, jint arg2, android::webkit::SafeBrowsingResponse arg3)
	{
		__thiz.callMethod<void>(
			"onSafeBrowsingHit",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;ILandroid/webkit/SafeBrowsingResponse;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void WebViewClient::onScaleChanged(android::webkit::WebView arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"onScaleChanged",
			"(Landroid/webkit/WebView;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void WebViewClient::onTooManyRedirects(android::webkit::WebView arg0, android::os::Message arg1, android::os::Message arg2)
	{
		__thiz.callMethod<void>(
			"onTooManyRedirects",
			"(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onUnhandledKeyEvent(android::webkit::WebView arg0, android::view::KeyEvent arg1)
	{
		__thiz.callMethod<void>(
			"onUnhandledKeyEvent",
			"(Landroid/webkit/WebView;Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject WebViewClient::shouldInterceptRequest(android::webkit::WebView arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject WebViewClient::shouldInterceptRequest(android::webkit::WebView arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject WebViewClient::shouldInterceptRequest(android::webkit::WebView arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean WebViewClient::shouldOverrideKeyEvent(android::webkit::WebView arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOverrideKeyEvent",
			"(Landroid/webkit/WebView;Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean WebViewClient::shouldOverrideUrlLoading(android::webkit::WebView arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOverrideUrlLoading",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean WebViewClient::shouldOverrideUrlLoading(android::webkit::WebView arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOverrideUrlLoading",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean WebViewClient::shouldOverrideUrlLoading(android::webkit::WebView arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOverrideUrlLoading",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::webkit
