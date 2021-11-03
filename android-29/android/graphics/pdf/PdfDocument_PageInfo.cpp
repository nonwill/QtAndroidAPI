#include "../Rect.hpp"
#include "./PdfDocument_PageInfo.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QJniObject forward
	PdfDocument_PageInfo::PdfDocument_PageInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Rect PdfDocument_PageInfo::getContentRect()
	{
		return callObjectMethod(
			"getContentRect",
			"()Landroid/graphics/Rect;"
		);
	}
	jint PdfDocument_PageInfo::getPageHeight()
	{
		return callMethod<jint>(
			"getPageHeight",
			"()I"
		);
	}
	jint PdfDocument_PageInfo::getPageNumber()
	{
		return callMethod<jint>(
			"getPageNumber",
			"()I"
		);
	}
	jint PdfDocument_PageInfo::getPageWidth()
	{
		return callMethod<jint>(
			"getPageWidth",
			"()I"
		);
	}
} // namespace android::graphics::pdf

