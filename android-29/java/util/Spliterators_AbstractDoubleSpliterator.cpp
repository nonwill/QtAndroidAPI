#include "./Spliterators_AbstractDoubleSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Spliterators_AbstractDoubleSpliterator::Spliterators_AbstractDoubleSpliterator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractDoubleSpliterator::characteristics()
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractDoubleSpliterator::estimateSize()
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	__JniBaseClass Spliterators_AbstractDoubleSpliterator::trySplit()
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
} // namespace java::util

