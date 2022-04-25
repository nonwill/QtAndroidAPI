#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class DrmInitData_SchemeInitData;
}
namespace java::util
{
	class UUID;
}

namespace android::media
{
	class DrmInitData : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInitData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInitData(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::media::DrmInitData_SchemeInitData get(java::util::UUID arg0) const;
	};
} // namespace android::media
