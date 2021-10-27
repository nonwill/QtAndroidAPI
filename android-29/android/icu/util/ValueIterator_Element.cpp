#include "./ValueIterator_Element.hpp"

namespace android::icu::util
{
	// Fields
	jint ValueIterator_Element::integer()
	{
		return __thiz.getField<jint>(
			"integer"
		);
	}
	jobject ValueIterator_Element::value()
	{
		return __thiz.getObjectField(
			"value",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	ValueIterator_Element::ValueIterator_Element(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ValueIterator_Element::ValueIterator_Element()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ValueIterator$Element",
			"()V"
		);
	}
	
	// Methods
} // namespace android::icu::util

