#pragma once

#include "./Activity.def.hpp"
#include "./Application.def.hpp"
#include "./Service.def.hpp"
#include "../content/BroadcastReceiver.def.hpp"
#include "../content/ContentProvider.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/pm/ApplicationInfo.def.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "./AppComponentFactory.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline AppComponentFactory::AppComponentFactory()
		: JObject(
			"android.app.AppComponentFactory",
			"()V"
		) {}
	
	// Methods
	inline android::app::Activity AppComponentFactory::instantiateActivity(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const
	{
		return callObjectMethod(
			"instantiateActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::Application AppComponentFactory::instantiateApplication(java::lang::ClassLoader arg0, JString arg1) const
	{
		return callObjectMethod(
			"instantiateApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/app/Application;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::lang::ClassLoader AppComponentFactory::instantiateClassLoader(java::lang::ClassLoader arg0, android::content::pm::ApplicationInfo arg1) const
	{
		return callObjectMethod(
			"instantiateClassLoader",
			"(Ljava/lang/ClassLoader;Landroid/content/pm/ApplicationInfo;)Ljava/lang/ClassLoader;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::ContentProvider AppComponentFactory::instantiateProvider(java::lang::ClassLoader arg0, JString arg1) const
	{
		return callObjectMethod(
			"instantiateProvider",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/content/ContentProvider;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::BroadcastReceiver AppComponentFactory::instantiateReceiver(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const
	{
		return callObjectMethod(
			"instantiateReceiver",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/BroadcastReceiver;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::Service AppComponentFactory::instantiateService(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const
	{
		return callObjectMethod(
			"instantiateService",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Service;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::app

// Base class headers

