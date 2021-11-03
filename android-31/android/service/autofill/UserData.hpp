#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::autofill
{
	class UserData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaxCategoryCount();
		static jint getMaxFieldClassificationIdsSize();
		static jint getMaxUserDataSize();
		static jint getMaxValueLength();
		static jint getMinValueLength();
		jint describeContents();
		JString getFieldClassificationAlgorithm();
		JString getFieldClassificationAlgorithmForCategory(JString arg0);
		JString getId();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

