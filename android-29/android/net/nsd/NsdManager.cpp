#include "./NsdServiceInfo.hpp"
#include "./NsdManager.hpp"

namespace android::net::nsd
{
	// Fields
	jstring NsdManager::ACTION_NSD_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.nsd.NsdManager",
			"ACTION_NSD_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NsdManager::EXTRA_NSD_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.nsd.NsdManager",
			"EXTRA_NSD_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NsdManager::FAILURE_ALREADY_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_ALREADY_ACTIVE"
		);
	}
	jint NsdManager::FAILURE_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_INTERNAL_ERROR"
		);
	}
	jint NsdManager::FAILURE_MAX_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_MAX_LIMIT"
		);
	}
	jint NsdManager::NSD_STATE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"NSD_STATE_DISABLED"
		);
	}
	jint NsdManager::NSD_STATE_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"NSD_STATE_ENABLED"
		);
	}
	jint NsdManager::PROTOCOL_DNS_SD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"PROTOCOL_DNS_SD"
		);
	}
	
	NsdManager::NsdManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void NsdManager::discoverServices(jstring arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"discoverServices",
			"(Ljava/lang/String;ILandroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void NsdManager::discoverServices(const QString &arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"discoverServices",
			"(Ljava/lang/String;ILandroid/net/nsd/NsdManager$DiscoveryListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void NsdManager::registerService(android::net::nsd::NsdServiceInfo arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"registerService",
			"(Landroid/net/nsd/NsdServiceInfo;ILandroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void NsdManager::resolveService(android::net::nsd::NsdServiceInfo arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"resolveService",
			"(Landroid/net/nsd/NsdServiceInfo;Landroid/net/nsd/NsdManager$ResolveListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NsdManager::stopServiceDiscovery(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"stopServiceDiscovery",
			"(Landroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0.__jniObject().object()
		);
	}
	void NsdManager::unregisterService(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterService",
			"(Landroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::nsd
