#include "../MultiResolutionImageReader.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../util/Size.hpp"
#include "../../../view/Surface.hpp"
#include "../../../../JClass.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./OutputConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	JObject OutputConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.params.OutputConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint OutputConfiguration::SURFACE_GROUP_ID_NONE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"SURFACE_GROUP_ID_NONE"
		);
	}
	
	// QJniObject forward
	OutputConfiguration::OutputConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	OutputConfiguration::OutputConfiguration(android::view::Surface arg0)
		: JObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(Landroid/view/Surface;)V",
			arg0.object()
		) {}
	OutputConfiguration::OutputConfiguration(android::util::Size arg0, JClass arg1)
		: JObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(Landroid/util/Size;Ljava/lang/Class;)V",
			arg0.object(),
			arg1.object<jclass>()
		) {}
	OutputConfiguration::OutputConfiguration(jint arg0, android::view::Surface arg1)
		: JObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(ILandroid/view/Surface;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	JObject OutputConfiguration::createInstancesForMultiResolutionOutput(android::hardware::camera2::MultiResolutionImageReader arg0)
	{
		return callStaticObjectMethod(
			"android.hardware.camera2.params.OutputConfiguration",
			"createInstancesForMultiResolutionOutput",
			"(Landroid/hardware/camera2/MultiResolutionImageReader;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	void OutputConfiguration::addSensorPixelModeUsed(jint arg0)
	{
		callMethod<void>(
			"addSensorPixelModeUsed",
			"(I)V",
			arg0
		);
	}
	void OutputConfiguration::addSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"addSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	jint OutputConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void OutputConfiguration::enableSurfaceSharing()
	{
		callMethod<void>(
			"enableSurfaceSharing",
			"()V"
		);
	}
	jboolean OutputConfiguration::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint OutputConfiguration::getMaxSharedSurfaceCount()
	{
		return callMethod<jint>(
			"getMaxSharedSurfaceCount",
			"()I"
		);
	}
	android::view::Surface OutputConfiguration::getSurface()
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	jint OutputConfiguration::getSurfaceGroupId()
	{
		return callMethod<jint>(
			"getSurfaceGroupId",
			"()I"
		);
	}
	JObject OutputConfiguration::getSurfaces()
	{
		return callObjectMethod(
			"getSurfaces",
			"()Ljava/util/List;"
		);
	}
	jint OutputConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OutputConfiguration::removeSensorPixelModeUsed(jint arg0)
	{
		callMethod<void>(
			"removeSensorPixelModeUsed",
			"(I)V",
			arg0
		);
	}
	void OutputConfiguration::removeSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"removeSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void OutputConfiguration::setPhysicalCameraId(JString arg0)
	{
		callMethod<void>(
			"setPhysicalCameraId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void OutputConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::camera2::params

