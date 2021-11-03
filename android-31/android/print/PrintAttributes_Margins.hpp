#pragma once

#include "../../JObject.hpp"


namespace android::print
{
	class PrintAttributes_Margins : public JObject
	{
	public:
		// Fields
		static android::print::PrintAttributes_Margins NO_MARGINS();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintAttributes_Margins(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes_Margins(QJniObject obj);
		
		// Constructors
		PrintAttributes_Margins(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBottomMils();
		jint getLeftMils();
		jint getRightMils();
		jint getTopMils();
		jint hashCode();
		jstring toString();
	};
} // namespace android::print

