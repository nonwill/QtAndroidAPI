#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class Xfermode : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Xfermode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Xfermode(QJniObject obj);
		
		// Constructors
		Xfermode();
		
		// Methods
	};
} // namespace android::graphics

