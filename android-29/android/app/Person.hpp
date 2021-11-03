#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Person_Builder;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::app
{
	class Person : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Person(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Person(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::graphics::drawable::Icon getIcon();
		JString getKey();
		JString getName();
		JString getUri();
		jint hashCode();
		jboolean isBot();
		jboolean isImportant();
		android::app::Person_Builder toBuilder();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

