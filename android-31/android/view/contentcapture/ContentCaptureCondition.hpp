#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view::contentcapture
{
	class ContentCaptureCondition : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_IS_REGEX();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureCondition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureCondition(QJniObject obj);
		
		// Constructors
		ContentCaptureCondition(android::content::LocusId arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getFlags();
		android::content::LocusId getLocusId();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

