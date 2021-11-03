#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}
class JString;

namespace android::view::textclassifier
{
	class TextLinks_Request : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::LocaleList getDefaultLocales();
		android::view::textclassifier::TextClassifier_EntityConfig getEntityConfig();
		JString getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

