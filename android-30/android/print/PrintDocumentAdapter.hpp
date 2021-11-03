#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintDocumentAdapter_LayoutResultCallback;
}
namespace android::print
{
	class PrintDocumentAdapter_WriteResultCallback;
}
class JString;

namespace android::print
{
	class PrintDocumentAdapter : public JObject
	{
	public:
		// Fields
		static JString EXTRA_PRINT_PREVIEW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocumentAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentAdapter(QAndroidJniObject obj);
		
		// Constructors
		PrintDocumentAdapter();
		
		// Methods
		void onFinish();
		void onLayout(android::print::PrintAttributes arg0, android::print::PrintAttributes arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_LayoutResultCallback arg3, android::os::Bundle arg4);
		void onStart();
		void onWrite(JArray arg0, android::os::ParcelFileDescriptor arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_WriteResultCallback arg3);
	};
} // namespace android::print

