#pragma once

#include "../../../JObject.hpp"

namespace android::app::assist
{
	class AssistStructure;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::autofill
{
	class FillContext : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getRequestId();
		android::app::assist::AssistStructure getStructure();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

