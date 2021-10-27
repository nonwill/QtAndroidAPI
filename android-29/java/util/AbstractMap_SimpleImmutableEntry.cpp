#include "./AbstractMap_SimpleImmutableEntry.hpp"

namespace java::util
{
	// Fields
	
	AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/util/Map$Entry;)V",
			arg0.__jniObject().object()
		);
	}
	AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(jobject &arg0, jobject &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean AbstractMap_SimpleImmutableEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject AbstractMap_SimpleImmutableEntry::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AbstractMap_SimpleImmutableEntry::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint AbstractMap_SimpleImmutableEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject AbstractMap_SimpleImmutableEntry::setValue(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring AbstractMap_SimpleImmutableEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util
