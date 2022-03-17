#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../net/http/SslError.def.hpp"
#include "../os/Message.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "./ClientCertRequest.def.hpp"
#include "./HttpAuthHandler.def.hpp"
#include "./RenderProcessGoneDetail.def.hpp"
#include "./SafeBrowsingResponse.def.hpp"
#include "./SslErrorHandler.def.hpp"
#include "./WebResourceError.def.hpp"
#include "./WebResourceResponse.def.hpp"
#include "./WebView.def.hpp"
#include "../../JString.hpp"
#include "./WebViewClient.def.hpp"

namespace android::webkit
{
	// Fields
	inline jint WebViewClient::ERROR_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_AUTHENTICATION"
		);
	}
	inline jint WebViewClient::ERROR_BAD_URL()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_BAD_URL"
		);
	}
	inline jint WebViewClient::ERROR_CONNECT()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_CONNECT"
		);
	}
	inline jint WebViewClient::ERROR_FAILED_SSL_HANDSHAKE()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FAILED_SSL_HANDSHAKE"
		);
	}
	inline jint WebViewClient::ERROR_FILE()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FILE"
		);
	}
	inline jint WebViewClient::ERROR_FILE_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FILE_NOT_FOUND"
		);
	}
	inline jint WebViewClient::ERROR_HOST_LOOKUP()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_HOST_LOOKUP"
		);
	}
	inline jint WebViewClient::ERROR_IO()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_IO"
		);
	}
	inline jint WebViewClient::ERROR_PROXY_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_PROXY_AUTHENTICATION"
		);
	}
	inline jint WebViewClient::ERROR_REDIRECT_LOOP()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_REDIRECT_LOOP"
		);
	}
	inline jint WebViewClient::ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_TIMEOUT"
		);
	}
	inline jint WebViewClient::ERROR_TOO_MANY_REQUESTS()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_TOO_MANY_REQUESTS"
		);
	}
	inline jint WebViewClient::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNKNOWN"
		);
	}
	inline jint WebViewClient::ERROR_UNSAFE_RESOURCE()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSAFE_RESOURCE"
		);
	}
	inline jint WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSUPPORTED_AUTH_SCHEME"
		);
	}
	inline jint WebViewClient::ERROR_UNSUPPORTED_SCHEME()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSUPPORTED_SCHEME"
		);
	}
	inline jint WebViewClient::SAFE_BROWSING_THREAT_BILLING()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_BILLING"
		);
	}
	inline jint WebViewClient::SAFE_BROWSING_THREAT_MALWARE()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_MALWARE"
		);
	}
	inline jint WebViewClient::SAFE_BROWSING_THREAT_PHISHING()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_PHISHING"
		);
	}
	inline jint WebViewClient::SAFE_BROWSING_THREAT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_UNKNOWN"
		);
	}
	inline jint WebViewClient::SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE()
	{
		return getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE"
		);
	}
	
	// Constructors
	inline WebViewClient::WebViewClient()
		: JObject(
			"android.webkit.WebViewClient",
			"()V"
		) {}
	
	// Methods
	inline void WebViewClient::doUpdateVisitedHistory(android::webkit::WebView arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"doUpdateVisitedHistory",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void WebViewClient::onFormResubmission(android::webkit::WebView arg0, android::os::Message arg1, android::os::Message arg2) const
	{
		callMethod<void>(
			"onFormResubmission",
			"(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WebViewClient::onLoadResource(android::webkit::WebView arg0, JString arg1) const
	{
		callMethod<void>(
			"onLoadResource",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void WebViewClient::onPageCommitVisible(android::webkit::WebView arg0, JString arg1) const
	{
		callMethod<void>(
			"onPageCommitVisible",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void WebViewClient::onPageFinished(android::webkit::WebView arg0, JString arg1) const
	{
		callMethod<void>(
			"onPageFinished",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void WebViewClient::onPageStarted(android::webkit::WebView arg0, JString arg1, android::graphics::Bitmap arg2) const
	{
		callMethod<void>(
			"onPageStarted",
			"(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void WebViewClient::onReceivedClientCertRequest(android::webkit::WebView arg0, android::webkit::ClientCertRequest arg1) const
	{
		callMethod<void>(
			"onReceivedClientCertRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/ClientCertRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebViewClient::onReceivedError(android::webkit::WebView arg0, JObject arg1, android::webkit::WebResourceError arg2) const
	{
		callMethod<void>(
			"onReceivedError",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WebViewClient::onReceivedError(android::webkit::WebView arg0, jint arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"onReceivedError",
			"(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline void WebViewClient::onReceivedHttpAuthRequest(android::webkit::WebView arg0, android::webkit::HttpAuthHandler arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"onReceivedHttpAuthRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline void WebViewClient::onReceivedHttpError(android::webkit::WebView arg0, JObject arg1, android::webkit::WebResourceResponse arg2) const
	{
		callMethod<void>(
			"onReceivedHttpError",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceResponse;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WebViewClient::onReceivedLoginRequest(android::webkit::WebView arg0, JString arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"onReceivedLoginRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline void WebViewClient::onReceivedSslError(android::webkit::WebView arg0, android::webkit::SslErrorHandler arg1, android::net::http::SslError arg2) const
	{
		callMethod<void>(
			"onReceivedSslError",
			"(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean WebViewClient::onRenderProcessGone(android::webkit::WebView arg0, android::webkit::RenderProcessGoneDetail arg1) const
	{
		return callMethod<jboolean>(
			"onRenderProcessGone",
			"(Landroid/webkit/WebView;Landroid/webkit/RenderProcessGoneDetail;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebViewClient::onSafeBrowsingHit(android::webkit::WebView arg0, JObject arg1, jint arg2, android::webkit::SafeBrowsingResponse arg3) const
	{
		callMethod<void>(
			"onSafeBrowsingHit",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;ILandroid/webkit/SafeBrowsingResponse;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline void WebViewClient::onScaleChanged(android::webkit::WebView arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"onScaleChanged",
			"(Landroid/webkit/WebView;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void WebViewClient::onTooManyRedirects(android::webkit::WebView arg0, android::os::Message arg1, android::os::Message arg2) const
	{
		callMethod<void>(
			"onTooManyRedirects",
			"(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WebViewClient::onUnhandledKeyEvent(android::webkit::WebView arg0, android::view::KeyEvent arg1) const
	{
		callMethod<void>(
			"onUnhandledKeyEvent",
			"(Landroid/webkit/WebView;Landroid/view/KeyEvent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::webkit::WebResourceResponse WebViewClient::shouldInterceptRequest(android::webkit::WebView arg0, JObject arg1) const
	{
		return callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::webkit::WebResourceResponse WebViewClient::shouldInterceptRequest(android::webkit::WebView arg0, JString arg1) const
	{
		return callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean WebViewClient::shouldOverrideKeyEvent(android::webkit::WebView arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"shouldOverrideKeyEvent",
			"(Landroid/webkit/WebView;Landroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean WebViewClient::shouldOverrideUrlLoading(android::webkit::WebView arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"shouldOverrideUrlLoading",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean WebViewClient::shouldOverrideUrlLoading(android::webkit::WebView arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"shouldOverrideUrlLoading",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::webkit

// Base class headers

