#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractMap.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::util
{
	class AbstractMap_SimpleImmutableEntry;
}
namespace java::util::concurrent::atomic
{
	class LongAdder;
}

namespace java::util::concurrent
{
	class ConcurrentSkipListMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentSkipListMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentSkipListMap(QAndroidJniObject obj);
		
		// Constructors
		ConcurrentSkipListMap();
		ConcurrentSkipListMap(__JniBaseClass arg0);
		
		// Methods
		__JniBaseClass ceilingEntry(jobject arg0);
		jobject ceilingKey(jobject arg0);
		void clear();
		java::util::concurrent::ConcurrentSkipListMap clone();
		__JniBaseClass comparator();
		jobject compute(jobject arg0, __JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __JniBaseClass arg1);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		__JniBaseClass descendingKeySet();
		__JniBaseClass descendingMap();
		__JniBaseClass entrySet();
		jboolean equals(jobject arg0);
		__JniBaseClass firstEntry();
		jobject firstKey();
		__JniBaseClass floorEntry(jobject arg0);
		jobject floorKey(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		__JniBaseClass headMap(jobject arg0);
		__JniBaseClass headMap(jobject arg0, jboolean arg1);
		__JniBaseClass higherEntry(jobject arg0);
		jobject higherKey(jobject arg0);
		jboolean isEmpty();
		__JniBaseClass keySet();
		__JniBaseClass lastEntry();
		jobject lastKey();
		__JniBaseClass lowerEntry(jobject arg0);
		jobject lowerKey(jobject arg0);
		jobject merge(jobject arg0, jobject arg1, __JniBaseClass arg2);
		__JniBaseClass navigableKeySet();
		__JniBaseClass pollFirstEntry();
		__JniBaseClass pollLastEntry();
		jobject put(jobject arg0, jobject arg1);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__JniBaseClass arg0);
		jint size();
		__JniBaseClass subMap(jobject arg0, jobject arg1);
		__JniBaseClass subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		__JniBaseClass tailMap(jobject arg0);
		__JniBaseClass tailMap(jobject arg0, jboolean arg1);
		__JniBaseClass values();
	};
} // namespace java::util::concurrent

