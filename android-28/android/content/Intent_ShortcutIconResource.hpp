#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class Intent_ShortcutIconResource : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jstring packageName();
		jstring resourceName();
		
		// QJniObject forward
		template<typename ...Ts> explicit Intent_ShortcutIconResource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Intent_ShortcutIconResource(QJniObject obj);
		
		// Constructors
		Intent_ShortcutIconResource();
		
		// Methods
		static android::content::Intent_ShortcutIconResource fromContext(android::content::Context arg0, jint arg1);
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

