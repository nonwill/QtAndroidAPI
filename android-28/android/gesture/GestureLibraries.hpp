#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::gesture
{
	class GestureLibrary;
}
namespace java::io
{
	class File;
}

namespace android::gesture
{
	class GestureLibraries : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureLibraries(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureLibraries(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::gesture::GestureLibrary fromFile(java::io::File arg0);
		static android::gesture::GestureLibrary fromFile(jstring arg0);
		static android::gesture::GestureLibrary fromPrivateFile(android::content::Context arg0, jstring arg1);
		static android::gesture::GestureLibrary fromRawResource(android::content::Context arg0, jint arg1);
	};
} // namespace android::gesture
