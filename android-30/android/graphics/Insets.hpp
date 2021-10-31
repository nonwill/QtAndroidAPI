#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics
{
	class Insets : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static android::graphics::Insets NONE();
		jint bottom();
		jint left();
		jint right();
		jint top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Insets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Insets(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Insets add(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static android::graphics::Insets max(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static android::graphics::Insets min(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static android::graphics::Insets of(android::graphics::Rect arg0);
		static android::graphics::Insets of(jint arg0, jint arg1, jint arg2, jint arg3);
		static android::graphics::Insets subtract(android::graphics::Insets arg0, android::graphics::Insets arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics
