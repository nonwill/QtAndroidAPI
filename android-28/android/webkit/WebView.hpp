#pragma once

#include "../widget/AbsoluteLayout.hpp"

class JByteArray;
class JArray;
class JArray;
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class PackageInfo;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Picture;
}
namespace android::graphics
{
	class Rect;
}
namespace android::net
{
	class Uri;
}
namespace android::net::http
{
	class SslCertificate;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}
namespace android::print
{
	class PrintDocumentAdapter;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class DragEvent;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::accessibility
{
	class AccessibilityNodeProvider;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::webkit
{
	class WebBackForwardList;
}
namespace android::webkit
{
	class WebChromeClient;
}
namespace android::webkit
{
	class WebMessage;
}
namespace android::webkit
{
	class WebSettings;
}
namespace android::webkit
{
	class WebView_HitTestResult;
}
namespace android::webkit
{
	class WebView_VisualStateCallback;
}
namespace android::webkit
{
	class WebViewClient;
}
class JString;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;

namespace android::webkit
{
	class WebView : public android::widget::AbsoluteLayout
	{
	public:
		// Fields
		static jint RENDERER_PRIORITY_BOUND();
		static jint RENDERER_PRIORITY_IMPORTANT();
		static jint RENDERER_PRIORITY_WAIVED();
		static JString SCHEME_GEO();
		static JString SCHEME_MAILTO();
		static JString SCHEME_TEL();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebView(const char *className, const char *sig, Ts...agv) : android::widget::AbsoluteLayout(className, sig, std::forward<Ts>(agv)...) {}
		WebView(QJniObject obj);
		
		// Constructors
		WebView(android::content::Context arg0);
		WebView(android::content::Context arg0, JObject arg1);
		WebView(android::content::Context arg0, JObject arg1, jint arg2);
		WebView(android::content::Context arg0, JObject arg1, jint arg2, jboolean arg3);
		WebView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		static void clearClientCertPreferences(JObject arg0);
		static void disableWebView();
		static void enableSlowWholeDocumentDraw();
		static JString findAddress(JString arg0);
		static android::content::pm::PackageInfo getCurrentWebViewPackage();
		static android::net::Uri getSafeBrowsingPrivacyPolicyUrl();
		static java::lang::ClassLoader getWebViewClassLoader();
		static void setDataDirectorySuffix(JString arg0);
		static void setSafeBrowsingWhitelist(JObject arg0, JObject arg1);
		static void setWebContentsDebuggingEnabled(jboolean arg0);
		static void startSafeBrowsing(android::content::Context arg0, JObject arg1);
		void addJavascriptInterface(JObject arg0, JString arg1);
		void autofill(android::util::SparseArray arg0);
		jboolean canGoBack();
		jboolean canGoBackOrForward(jint arg0);
		jboolean canGoForward();
		jboolean canZoomIn();
		jboolean canZoomOut();
		android::graphics::Picture capturePicture();
		void clearCache(jboolean arg0);
		void clearFormData();
		void clearHistory();
		void clearMatches();
		void clearSslPreferences();
		void clearView();
		void computeScroll();
		android::webkit::WebBackForwardList copyBackForwardList();
		android::print::PrintDocumentAdapter createPrintDocumentAdapter();
		android::print::PrintDocumentAdapter createPrintDocumentAdapter(JString arg0);
		JArray createWebMessageChannel();
		void destroy();
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		void documentHasImages(android::os::Message arg0);
		void evaluateJavascript(JString arg0, JObject arg1);
		jint findAll(JString arg0);
		void findAllAsync(JString arg0);
		android::view::View findFocus();
		void findNext(jboolean arg0);
		void flingScroll(jint arg0, jint arg1);
		void freeMemory();
		JString getAccessibilityClassName();
		android::view::accessibility::AccessibilityNodeProvider getAccessibilityNodeProvider();
		android::net::http::SslCertificate getCertificate();
		jint getContentHeight();
		android::graphics::Bitmap getFavicon();
		android::os::Handler getHandler();
		android::webkit::WebView_HitTestResult getHitTestResult();
		JArray getHttpAuthUsernamePassword(JString arg0, JString arg1);
		JString getOriginalUrl();
		jint getProgress();
		jboolean getRendererPriorityWaivedWhenNotVisible();
		jint getRendererRequestedPriority();
		jfloat getScale();
		android::webkit::WebSettings getSettings();
		JObject getTextClassifier();
		JString getTitle();
		JString getUrl();
		android::webkit::WebChromeClient getWebChromeClient();
		android::webkit::WebViewClient getWebViewClient();
		android::os::Looper getWebViewLooper();
		void goBack();
		void goBackOrForward(jint arg0);
		void goForward();
		void invokeZoomPicker();
		jboolean isPrivateBrowsingEnabled();
		jboolean isVisibleToUserForAutofill(jint arg0);
		void loadData(JString arg0, JString arg1, JString arg2);
		void loadDataWithBaseURL(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		void loadUrl(JString arg0);
		void loadUrl(JString arg0, JObject arg1);
		jboolean onCheckIsTextEditor();
		void onChildViewAdded(android::view::View arg0, android::view::View arg1);
		void onChildViewRemoved(android::view::View arg0, android::view::View arg1);
		JObject onCreateInputConnection(android::view::inputmethod::EditorInfo arg0);
		jboolean onDragEvent(android::view::DragEvent arg0);
		void onFinishTemporaryDetach();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		void onGlobalFocusChanged(android::view::View arg0, android::view::View arg1);
		jboolean onHoverEvent(android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onPause();
		void onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1);
		void onProvideVirtualStructure(android::view::ViewStructure arg0);
		void onResume();
		void onStartTemporaryDetach();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void onWindowFocusChanged(jboolean arg0);
		jboolean overlayHorizontalScrollbar();
		jboolean overlayVerticalScrollbar();
		jboolean pageDown(jboolean arg0);
		jboolean pageUp(jboolean arg0);
		void pauseTimers();
		jboolean performLongClick();
		void postUrl(JString arg0, JByteArray arg1);
		void postVisualStateCallback(jlong arg0, android::webkit::WebView_VisualStateCallback arg1);
		void postWebMessage(android::webkit::WebMessage arg0, android::net::Uri arg1);
		void reload();
		void removeJavascriptInterface(JString arg0);
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2);
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1);
		void requestFocusNodeHref(android::os::Message arg0);
		void requestImageRef(android::os::Message arg0);
		android::webkit::WebBackForwardList restoreState(android::os::Bundle arg0);
		void resumeTimers();
		void savePassword(JString arg0, JString arg1, JString arg2);
		android::webkit::WebBackForwardList saveState(android::os::Bundle arg0);
		void saveWebArchive(JString arg0);
		void saveWebArchive(JString arg0, jboolean arg1, JObject arg2);
		void setBackgroundColor(jint arg0);
		void setCertificate(android::net::http::SslCertificate arg0);
		void setDownloadListener(JObject arg0);
		void setFindListener(JObject arg0);
		void setHorizontalScrollbarOverlay(jboolean arg0);
		void setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3);
		void setInitialScale(jint arg0);
		void setLayerType(jint arg0, android::graphics::Paint arg1);
		void setLayoutParams(android::view::ViewGroup_LayoutParams arg0);
		void setMapTrackballToArrowKeys(jboolean arg0);
		void setNetworkAvailable(jboolean arg0);
		void setOverScrollMode(jint arg0);
		void setPictureListener(JObject arg0);
		void setRendererPriorityPolicy(jint arg0, jboolean arg1);
		void setScrollBarStyle(jint arg0);
		void setTextClassifier(JObject arg0);
		void setVerticalScrollbarOverlay(jboolean arg0);
		void setWebChromeClient(android::webkit::WebChromeClient arg0);
		void setWebViewClient(android::webkit::WebViewClient arg0);
		jboolean shouldDelayChildPressedState();
		jboolean showFindDialog(JString arg0, jboolean arg1);
		void stopLoading();
		void zoomBy(jfloat arg0);
		jboolean zoomIn();
		jboolean zoomOut();
	};
} // namespace android::webkit

