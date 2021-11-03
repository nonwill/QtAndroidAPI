#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::autofill
{
	class AutofillId;
}
class JString;
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class RegexValidator : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RegexValidator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RegexValidator(QAndroidJniObject obj);
		
		// Constructors
		RegexValidator(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1);
		
		// Methods
		jint describeContents();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

