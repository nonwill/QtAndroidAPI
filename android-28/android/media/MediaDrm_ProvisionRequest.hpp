#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class MediaDrm_ProvisionRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_ProvisionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_ProvisionRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getData();
		jstring getDefaultUrl();
	};
} // namespace android::media

