#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "../os/ParcelUuid.hpp"
#include "./SubscriptionInfo.hpp"
#include "./SubscriptionManager_OnOpportunisticSubscriptionsChangedListener.hpp"
#include "./SubscriptionManager_OnSubscriptionsChangedListener.hpp"
#include "./SubscriptionManager.hpp"

namespace android::telephony
{
	// Fields
	jstring SubscriptionManager::ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SubscriptionManager::ACTION_DEFAULT_SUBSCRIPTION_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SubscriptionManager::ACTION_MANAGE_SUBSCRIPTION_PLANS()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_MANAGE_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SubscriptionManager::ACTION_REFRESH_SUBSCRIPTION_PLANS()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_REFRESH_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SubscriptionManager::DATA_ROAMING_DISABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_DISABLE"
		);
	}
	jint SubscriptionManager::DATA_ROAMING_ENABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_ENABLE"
		);
	}
	jint SubscriptionManager::DEFAULT_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DEFAULT_SUBSCRIPTION_ID"
		);
	}
	jstring SubscriptionManager::EXTRA_SUBSCRIPTION_INDEX()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"EXTRA_SUBSCRIPTION_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SubscriptionManager::INVALID_SIM_SLOT_INDEX()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SIM_SLOT_INDEX"
		);
	}
	jint SubscriptionManager::INVALID_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SUBSCRIPTION_ID"
		);
	}
	jint SubscriptionManager::SUBSCRIPTION_TYPE_LOCAL_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"SUBSCRIPTION_TYPE_LOCAL_SIM"
		);
	}
	jint SubscriptionManager::SUBSCRIPTION_TYPE_REMOTE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"SUBSCRIPTION_TYPE_REMOTE_SIM"
		);
	}
	
	// QJniObject forward
	SubscriptionManager::SubscriptionManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::SubscriptionManager SubscriptionManager::from(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.SubscriptionManager",
			"from",
			"(Landroid/content/Context;)Landroid/telephony/SubscriptionManager;",
			arg0.object()
		);
	}
	jint SubscriptionManager::getDefaultDataSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultDataSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultSmsSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSmsSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultVoiceSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultVoiceSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getSlotIndex(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getSlotIndex",
			"(I)I",
			arg0
		);
	}
	jboolean SubscriptionManager::isUsableSubscriptionId(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.SubscriptionManager",
			"isUsableSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	jboolean SubscriptionManager::isValidSubscriptionId(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.SubscriptionManager",
			"isValidSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	void SubscriptionManager::addOnOpportunisticSubscriptionsChangedListener(__JniBaseClass arg0, android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg1)
	{
		callMethod<void>(
			"addOnOpportunisticSubscriptionsChangedListener",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/SubscriptionManager$OnOpportunisticSubscriptionsChangedListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SubscriptionManager::addOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0)
	{
		callMethod<void>(
			"addOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.object()
		);
	}
	void SubscriptionManager::addSubscriptionsIntoGroup(__JniBaseClass arg0, android::os::ParcelUuid arg1)
	{
		callMethod<void>(
			"addSubscriptionsIntoGroup",
			"(Ljava/util/List;Landroid/os/ParcelUuid;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean SubscriptionManager::canManageSubscription(android::telephony::SubscriptionInfo arg0)
	{
		return callMethod<jboolean>(
			"canManageSubscription",
			"(Landroid/telephony/SubscriptionInfo;)Z",
			arg0.object()
		);
	}
	android::os::ParcelUuid SubscriptionManager::createSubscriptionGroup(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"createSubscriptionGroup",
			"(Ljava/util/List;)Landroid/os/ParcelUuid;",
			arg0.object()
		);
	}
	__JniBaseClass SubscriptionManager::getAccessibleSubscriptionInfoList()
	{
		return callObjectMethod(
			"getAccessibleSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	android::telephony::SubscriptionInfo SubscriptionManager::getActiveSubscriptionInfo(jint arg0)
	{
		return callObjectMethod(
			"getActiveSubscriptionInfo",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	jint SubscriptionManager::getActiveSubscriptionInfoCount()
	{
		return callMethod<jint>(
			"getActiveSubscriptionInfoCount",
			"()I"
		);
	}
	jint SubscriptionManager::getActiveSubscriptionInfoCountMax()
	{
		return callMethod<jint>(
			"getActiveSubscriptionInfoCountMax",
			"()I"
		);
	}
	android::telephony::SubscriptionInfo SubscriptionManager::getActiveSubscriptionInfoForSimSlotIndex(jint arg0)
	{
		return callObjectMethod(
			"getActiveSubscriptionInfoForSimSlotIndex",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	__JniBaseClass SubscriptionManager::getActiveSubscriptionInfoList()
	{
		return callObjectMethod(
			"getActiveSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass SubscriptionManager::getOpportunisticSubscriptions()
	{
		return callObjectMethod(
			"getOpportunisticSubscriptions",
			"()Ljava/util/List;"
		);
	}
	jintArray SubscriptionManager::getSubscriptionIds(jint arg0)
	{
		return callObjectMethod(
			"getSubscriptionIds",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	__JniBaseClass SubscriptionManager::getSubscriptionPlans(jint arg0)
	{
		return callObjectMethod(
			"getSubscriptionPlans",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass SubscriptionManager::getSubscriptionsInGroup(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"getSubscriptionsInGroup",
			"(Landroid/os/ParcelUuid;)Ljava/util/List;",
			arg0.object()
		);
	}
	jboolean SubscriptionManager::isActiveSubscriptionId(jint arg0)
	{
		return callMethod<jboolean>(
			"isActiveSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	jboolean SubscriptionManager::isNetworkRoaming(jint arg0)
	{
		return callMethod<jboolean>(
			"isNetworkRoaming",
			"(I)Z",
			arg0
		);
	}
	void SubscriptionManager::removeOnOpportunisticSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg0)
	{
		callMethod<void>(
			"removeOnOpportunisticSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnOpportunisticSubscriptionsChangedListener;)V",
			arg0.object()
		);
	}
	void SubscriptionManager::removeOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0)
	{
		callMethod<void>(
			"removeOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.object()
		);
	}
	void SubscriptionManager::removeSubscriptionsFromGroup(__JniBaseClass arg0, android::os::ParcelUuid arg1)
	{
		callMethod<void>(
			"removeSubscriptionsFromGroup",
			"(Ljava/util/List;Landroid/os/ParcelUuid;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean SubscriptionManager::setOpportunistic(jboolean arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"setOpportunistic",
			"(ZI)Z",
			arg0,
			arg1
		);
	}
	void SubscriptionManager::setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2)
	{
		callMethod<void>(
			"setSubscriptionOverrideCongested",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SubscriptionManager::setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2)
	{
		callMethod<void>(
			"setSubscriptionOverrideUnmetered",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SubscriptionManager::setSubscriptionPlans(jint arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"setSubscriptionPlans",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
	void SubscriptionManager::switchToSubscription(jint arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::telephony

