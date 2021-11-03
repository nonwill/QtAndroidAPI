#include "./SubscriptionPlan.hpp"
#include "../../java/time/Period.hpp"
#include "../../java/time/ZonedDateTime.hpp"
#include "./SubscriptionPlan_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	SubscriptionPlan_Builder::SubscriptionPlan_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::createNonrecurring(java::time::ZonedDateTime arg0, java::time::ZonedDateTime arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createNonrecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/ZonedDateTime;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::createRecurring(java::time::ZonedDateTime arg0, java::time::Period arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createRecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/Period;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telephony::SubscriptionPlan SubscriptionPlan_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SubscriptionPlan;"
		);
	}
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::resetNetworkTypes()
	{
		return callObjectMethod(
			"resetNetworkTypes",
			"()Landroid/telephony/SubscriptionPlan$Builder;"
		);
	}
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setDataLimit(jlong arg0, jint arg1)
	{
		return callObjectMethod(
			"setDataLimit",
			"(JI)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setDataUsage(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"setDataUsage",
			"(JJ)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setNetworkTypes(jintArray arg0)
	{
		return callObjectMethod(
			"setNetworkTypes",
			"([I)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0
		);
	}
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setSummary(jstring arg0)
	{
		return callObjectMethod(
			"setSummary",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0
		);
	}
	android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setTitle(jstring arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0
		);
	}
} // namespace android::telephony

