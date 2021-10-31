#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./MessagePdu.hpp"
#include "./CarrierMessagingService.hpp"

namespace android::service::carrier
{
	// Fields
	jint CarrierMessagingService::DOWNLOAD_STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_ERROR"
		);
	}
	jint CarrierMessagingService::DOWNLOAD_STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_OK"
		);
	}
	jint CarrierMessagingService::DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_DEFAULT()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DEFAULT"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_DROP()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DROP"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE"
		);
	}
	jint CarrierMessagingService::SEND_FLAG_REQUEST_DELIVERY_STATUS()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_FLAG_REQUEST_DELIVERY_STATUS"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_ERROR"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_OK"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	jstring CarrierMessagingService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.carrier.CarrierMessagingService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	CarrierMessagingService::CarrierMessagingService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CarrierMessagingService::CarrierMessagingService()
		: android::app::Service(
			"android.service.carrier.CarrierMessagingService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass CarrierMessagingService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CarrierMessagingService::onDownloadMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, __JniBaseClass arg3)
	{
		callMethod<void>(
			"onDownloadMms",
			"(Landroid/net/Uri;ILandroid/net/Uri;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void CarrierMessagingService::onFilterSms(android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __JniBaseClass arg4)
	{
		callMethod<void>(
			"onFilterSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onReceiveTextSms(android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __JniBaseClass arg4)
	{
		callMethod<void>(
			"onReceiveTextSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, __JniBaseClass arg4)
	{
		callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, jint arg4, __JniBaseClass arg5)
	{
		callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void CarrierMessagingService::onSendMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, __JniBaseClass arg3)
	{
		callMethod<void>(
			"onSendMms",
			"(Landroid/net/Uri;ILandroid/net/Uri;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(__JniBaseClass arg0, jint arg1, jstring arg2, __JniBaseClass arg3)
	{
		callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(__JniBaseClass arg0, jint arg1, jstring arg2, jint arg3, __JniBaseClass arg4)
	{
		callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onSendTextSms(jstring arg0, jint arg1, jstring arg2, __JniBaseClass arg3)
	{
		callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void CarrierMessagingService::onSendTextSms(jstring arg0, jint arg1, jstring arg2, jint arg3, __JniBaseClass arg4)
	{
		callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
} // namespace android::service::carrier

