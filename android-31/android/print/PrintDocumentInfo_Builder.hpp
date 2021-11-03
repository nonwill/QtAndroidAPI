#pragma once

#include "../../JObject.hpp"

namespace android::print
{
	class PrintDocumentInfo;
}

namespace android::print
{
	class PrintDocumentInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintDocumentInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentInfo_Builder(QJniObject obj);
		
		// Constructors
		PrintDocumentInfo_Builder(jstring arg0);
		
		// Methods
		android::print::PrintDocumentInfo build();
		android::print::PrintDocumentInfo_Builder setContentType(jint arg0);
		android::print::PrintDocumentInfo_Builder setPageCount(jint arg0);
	};
} // namespace android::print

