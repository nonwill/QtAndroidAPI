#include "./Int64Ref.hpp"

namespace android::system
{
	// Fields
	jlong Int64Ref::value()
	{
		return getField<jlong>(
			"value"
		);
	}
	
	// QJniObject forward
	Int64Ref::Int64Ref(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Int64Ref::Int64Ref(jlong arg0)
		: JObject(
			"android.system.Int64Ref",
			"(J)V",
			arg0
		) {}
	
	// Methods
	jstring Int64Ref::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

