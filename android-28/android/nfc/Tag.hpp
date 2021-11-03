#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::nfc
{
	class Tag : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Tag(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Tag(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JByteArray getId();
		JArray getTechList();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::nfc

