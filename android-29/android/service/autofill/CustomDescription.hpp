#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::autofill
{
	class CustomDescription_Builder;
}

namespace android::service::autofill
{
	class CustomDescription : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CustomDescription(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CustomDescription(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

