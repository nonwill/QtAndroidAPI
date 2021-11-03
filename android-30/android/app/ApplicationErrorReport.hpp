#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class ApplicationErrorReport_AnrInfo;
}
namespace android::app
{
	class ApplicationErrorReport_BatteryInfo;
}
namespace android::app
{
	class ApplicationErrorReport_CrashInfo;
}
namespace android::app
{
	class ApplicationErrorReport_RunningServiceInfo;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class ApplicationErrorReport : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_ANR();
		static jint TYPE_BATTERY();
		static jint TYPE_CRASH();
		static jint TYPE_NONE();
		static jint TYPE_RUNNING_SERVICE();
		android::app::ApplicationErrorReport_AnrInfo anrInfo();
		android::app::ApplicationErrorReport_BatteryInfo batteryInfo();
		android::app::ApplicationErrorReport_CrashInfo crashInfo();
		JString installerPackageName();
		JString packageName();
		JString processName();
		android::app::ApplicationErrorReport_RunningServiceInfo runningServiceInfo();
		jboolean systemApp();
		jlong time();
		jint type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport(QAndroidJniObject obj);
		
		// Constructors
		ApplicationErrorReport();
		
		// Methods
		static android::content::ComponentName getErrorReportReceiver(android::content::Context arg0, JString arg1, jint arg2);
		jint describeContents();
		void dump(JObject arg0, JString arg1);
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

