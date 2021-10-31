#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Person;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::app
{
	class Person_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Person_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Person_Builder(QAndroidJniObject obj);
		
		// Constructors
		Person_Builder();
		
		// Methods
		android::app::Person build();
		android::app::Person_Builder setBot(jboolean arg0);
		android::app::Person_Builder setIcon(android::graphics::drawable::Icon arg0);
		android::app::Person_Builder setImportant(jboolean arg0);
		android::app::Person_Builder setKey(jstring arg0);
		android::app::Person_Builder setName(jstring arg0);
		android::app::Person_Builder setUri(jstring arg0);
	};
} // namespace android::app
