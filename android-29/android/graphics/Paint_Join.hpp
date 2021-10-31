#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Join : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Join BEVEL();
		static android::graphics::Paint_Join MITER();
		static android::graphics::Paint_Join ROUND();
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_Join(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Join(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Join valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

