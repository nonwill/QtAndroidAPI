#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class ImageDecoder_Source : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ImageDecoder_Source(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImageDecoder_Source(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::graphics

