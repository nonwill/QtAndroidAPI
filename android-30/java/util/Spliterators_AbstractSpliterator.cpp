#include "./Spliterators_AbstractSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Spliterators_AbstractSpliterator::Spliterators_AbstractSpliterator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractSpliterator::characteristics() const
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractSpliterator::estimateSize() const
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	JObject Spliterators_AbstractSpliterator::trySplit() const
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util

