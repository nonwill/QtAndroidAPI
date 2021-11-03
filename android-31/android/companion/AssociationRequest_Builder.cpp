#include "./AssociationRequest.hpp"
#include "./AssociationRequest_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QJniObject forward
	AssociationRequest_Builder::AssociationRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AssociationRequest_Builder::AssociationRequest_Builder()
		: JObject(
			"android.companion.AssociationRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::companion::AssociationRequest_Builder AssociationRequest_Builder::addDeviceFilter(JObject arg0)
	{
		return callObjectMethod(
			"addDeviceFilter",
			"(Landroid/companion/DeviceFilter;)Landroid/companion/AssociationRequest$Builder;",
			arg0.object()
		);
	}
	android::companion::AssociationRequest AssociationRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/AssociationRequest;"
		);
	}
	android::companion::AssociationRequest_Builder AssociationRequest_Builder::setDeviceProfile(jstring arg0)
	{
		return callObjectMethod(
			"setDeviceProfile",
			"(Ljava/lang/String;)Landroid/companion/AssociationRequest$Builder;",
			arg0
		);
	}
	android::companion::AssociationRequest_Builder AssociationRequest_Builder::setSingleDevice(jboolean arg0)
	{
		return callObjectMethod(
			"setSingleDevice",
			"(Z)Landroid/companion/AssociationRequest$Builder;",
			arg0
		);
	}
} // namespace android::companion

