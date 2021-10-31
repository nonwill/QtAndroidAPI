#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Size : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Size(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Size(QJniObject obj);
		
		// Constructors
		Size(jint arg0, jint arg1);
		
		// Methods
		static android::util::Size parseSize(jstring arg0);
		jboolean equals(jobject arg0);
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

