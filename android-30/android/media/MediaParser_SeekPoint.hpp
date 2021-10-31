#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaParser_SeekPoint : public __JniBaseClass
	{
	public:
		// Fields
		static android::media::MediaParser_SeekPoint START();
		jlong position();
		jlong timeMicros();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaParser_SeekPoint(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser_SeekPoint(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::media

