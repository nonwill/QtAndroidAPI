#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::print
{
	class PrintDocumentInfo;
}

namespace android::printservice
{
	class PrintDocument : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocument(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocument(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::os::ParcelFileDescriptor getData() const;
		android::print::PrintDocumentInfo getInfo() const;
	};
} // namespace android::printservice

