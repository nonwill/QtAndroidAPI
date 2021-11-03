#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::mtp
{
	class MtpObjectInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MtpObjectInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpObjectInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAssociationDesc();
		jint getAssociationType();
		jint getCompressedSize();
		jlong getCompressedSizeLong();
		jlong getDateCreated();
		jlong getDateModified();
		jint getFormat();
		jint getImagePixDepth();
		jlong getImagePixDepthLong();
		jint getImagePixHeight();
		jlong getImagePixHeightLong();
		jint getImagePixWidth();
		jlong getImagePixWidthLong();
		JString getKeywords();
		JString getName();
		jint getObjectHandle();
		jint getParent();
		jint getProtectionStatus();
		jint getSequenceNumber();
		jlong getSequenceNumberLong();
		jint getStorageId();
		jint getThumbCompressedSize();
		jlong getThumbCompressedSizeLong();
		jint getThumbFormat();
		jint getThumbPixHeight();
		jlong getThumbPixHeightLong();
		jint getThumbPixWidth();
		jlong getThumbPixWidthLong();
	};
} // namespace android::mtp

