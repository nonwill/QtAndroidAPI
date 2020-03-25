#pragma once

#ifndef ANDROID_APP_SEARCHMANAGER
#define ANDROID_APP_SEARCHMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class SearchableInfo;
}

namespace __jni_impl::android::app
{
	class SearchManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_KEY();
		static QAndroidJniObject ACTION_MSG();
		static QAndroidJniObject APP_DATA();
		static QAndroidJniObject CURSOR_EXTRA_KEY_IN_PROGRESS();
		static QAndroidJniObject EXTRA_DATA_KEY();
		static QAndroidJniObject EXTRA_NEW_SEARCH();
		static QAndroidJniObject EXTRA_SELECT_QUERY();
		static QAndroidJniObject EXTRA_WEB_SEARCH_PENDINGINTENT();
		static jint FLAG_QUERY_REFINEMENT();
		static QAndroidJniObject INTENT_ACTION_GLOBAL_SEARCH();
		static QAndroidJniObject INTENT_ACTION_SEARCHABLES_CHANGED();
		static QAndroidJniObject INTENT_ACTION_SEARCH_SETTINGS();
		static QAndroidJniObject INTENT_ACTION_SEARCH_SETTINGS_CHANGED();
		static QAndroidJniObject INTENT_ACTION_WEB_SEARCH_SETTINGS();
		static QAndroidJniObject INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED();
		static jchar MENU_KEY();
		static jint MENU_KEYCODE();
		static QAndroidJniObject QUERY();
		static QAndroidJniObject SHORTCUT_MIME_TYPE();
		static QAndroidJniObject SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG();
		static QAndroidJniObject SUGGEST_COLUMN_CONTENT_TYPE();
		static QAndroidJniObject SUGGEST_COLUMN_DURATION();
		static QAndroidJniObject SUGGEST_COLUMN_FLAGS();
		static QAndroidJniObject SUGGEST_COLUMN_FORMAT();
		static QAndroidJniObject SUGGEST_COLUMN_ICON_1();
		static QAndroidJniObject SUGGEST_COLUMN_ICON_2();
		static QAndroidJniObject SUGGEST_COLUMN_INTENT_ACTION();
		static QAndroidJniObject SUGGEST_COLUMN_INTENT_DATA();
		static QAndroidJniObject SUGGEST_COLUMN_INTENT_DATA_ID();
		static QAndroidJniObject SUGGEST_COLUMN_INTENT_EXTRA_DATA();
		static QAndroidJniObject SUGGEST_COLUMN_IS_LIVE();
		static QAndroidJniObject SUGGEST_COLUMN_LAST_ACCESS_HINT();
		static QAndroidJniObject SUGGEST_COLUMN_PRODUCTION_YEAR();
		static QAndroidJniObject SUGGEST_COLUMN_PURCHASE_PRICE();
		static QAndroidJniObject SUGGEST_COLUMN_QUERY();
		static QAndroidJniObject SUGGEST_COLUMN_RATING_SCORE();
		static QAndroidJniObject SUGGEST_COLUMN_RATING_STYLE();
		static QAndroidJniObject SUGGEST_COLUMN_RENTAL_PRICE();
		static QAndroidJniObject SUGGEST_COLUMN_RESULT_CARD_IMAGE();
		static QAndroidJniObject SUGGEST_COLUMN_SHORTCUT_ID();
		static QAndroidJniObject SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING();
		static QAndroidJniObject SUGGEST_COLUMN_TEXT_1();
		static QAndroidJniObject SUGGEST_COLUMN_TEXT_2();
		static QAndroidJniObject SUGGEST_COLUMN_TEXT_2_URL();
		static QAndroidJniObject SUGGEST_COLUMN_VIDEO_HEIGHT();
		static QAndroidJniObject SUGGEST_COLUMN_VIDEO_WIDTH();
		static QAndroidJniObject SUGGEST_MIME_TYPE();
		static QAndroidJniObject SUGGEST_NEVER_MAKE_SHORTCUT();
		static QAndroidJniObject SUGGEST_PARAMETER_LIMIT();
		static QAndroidJniObject SUGGEST_URI_PATH_QUERY();
		static QAndroidJniObject SUGGEST_URI_PATH_SHORTCUT();
		static QAndroidJniObject USER_QUERY();
		
		// Constructors
		void __constructor();
		
		// Methods
		void setOnDismissListener(__jni_impl::__JniBaseClass arg0);
		void setOnCancelListener(__jni_impl::__JniBaseClass arg0);
		void startSearch(jstring arg0, jboolean arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::Bundle arg3, jboolean arg4);
		void triggerSearch(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject getGlobalSearchActivity();
		void stopSearch();
		void onDismiss(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getSearchableInfo(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getSearchablesInGlobalSearch();
		void onCancel(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/ComponentName.hpp"
#include "../os/Bundle.hpp"
#include "SearchableInfo.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject SearchManager::ACTION_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"ACTION_KEY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::ACTION_MSG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"ACTION_MSG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::APP_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"APP_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::CURSOR_EXTRA_KEY_IN_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"CURSOR_EXTRA_KEY_IN_PROGRESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::EXTRA_DATA_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_DATA_KEY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::EXTRA_NEW_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_NEW_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::EXTRA_SELECT_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_SELECT_QUERY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::EXTRA_WEB_SEARCH_PENDINGINTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_WEB_SEARCH_PENDINGINTENT",
			"Ljava/lang/String;");
	}
	jint SearchManager::FLAG_QUERY_REFINEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.SearchManager",
			"FLAG_QUERY_REFINEMENT");
	}
	QAndroidJniObject SearchManager::INTENT_ACTION_GLOBAL_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_GLOBAL_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::INTENT_ACTION_SEARCHABLES_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_SEARCHABLES_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::INTENT_ACTION_SEARCH_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_SEARCH_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::INTENT_ACTION_SEARCH_SETTINGS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_SEARCH_SETTINGS_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::INTENT_ACTION_WEB_SEARCH_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_WEB_SEARCH_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED",
			"Ljava/lang/String;");
	}
	jchar SearchManager::MENU_KEY()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.app.SearchManager",
			"MENU_KEY");
	}
	jint SearchManager::MENU_KEYCODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.SearchManager",
			"MENU_KEYCODE");
	}
	QAndroidJniObject SearchManager::QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"QUERY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SHORTCUT_MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SHORTCUT_MIME_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_DURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_FLAGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_FLAGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_FORMAT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_ICON_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_ICON_1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_ICON_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_ICON_2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_INTENT_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_INTENT_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_INTENT_DATA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_DATA_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_INTENT_EXTRA_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_EXTRA_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_IS_LIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_IS_LIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_LAST_ACCESS_HINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_LAST_ACCESS_HINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_PRODUCTION_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_PRODUCTION_YEAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_PURCHASE_PRICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_PURCHASE_PRICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_QUERY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_RATING_SCORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RATING_SCORE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_RATING_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RATING_STYLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_RENTAL_PRICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RENTAL_PRICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_RESULT_CARD_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RESULT_CARD_IMAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_SHORTCUT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_SHORTCUT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_TEXT_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_TEXT_1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_TEXT_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_TEXT_2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_TEXT_2_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_TEXT_2_URL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_VIDEO_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_COLUMN_VIDEO_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_MIME_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_NEVER_MAKE_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_NEVER_MAKE_SHORTCUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_PARAMETER_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_PARAMETER_LIMIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_URI_PATH_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_URI_PATH_QUERY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::SUGGEST_URI_PATH_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_URI_PATH_SHORTCUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SearchManager::USER_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchManager",
			"USER_QUERY",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void SearchManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.SearchManager",
			"(V)V");
	}
	
	// Methods
	void SearchManager::setOnDismissListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/app/SearchManager$OnDismissListener;)V",
			arg0.__jniObject().object());
	}
	void SearchManager::setOnCancelListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCancelListener",
			"(Landroid/app/SearchManager$OnCancelListener;)V",
			arg0.__jniObject().object());
	}
	void SearchManager::startSearch(jstring arg0, jboolean arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::Bundle arg3, jboolean arg4)
	{
		__thiz.callMethod<void>(
			"startSearch",
			"(Ljava/lang/String;ZLandroid/content/ComponentName;Landroid/os/Bundle;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4);
	}
	void SearchManager::triggerSearch(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject SearchManager::getGlobalSearchActivity()
	{
		return __thiz.callObjectMethod(
			"getGlobalSearchActivity",
			"()Landroid/content/ComponentName;");
	}
	void SearchManager::stopSearch()
	{
		__thiz.callMethod<void>(
			"stopSearch",
			"()V");
	}
	void SearchManager::onDismiss(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SearchManager::getSearchableInfo(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getSearchableInfo",
			"(Landroid/content/ComponentName;)Landroid/app/SearchableInfo;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SearchManager::getSearchablesInGlobalSearch()
	{
		return __thiz.callObjectMethod(
			"getSearchablesInGlobalSearch",
			"()Ljava/util/List;");
	}
	void SearchManager::onCancel(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCancel",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class SearchManager : public __jni_impl::android::app::SearchManager
	{
	public:
		SearchManager(QAndroidJniObject obj) { __thiz = obj; }
		SearchManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_SEARCHMANAGER

