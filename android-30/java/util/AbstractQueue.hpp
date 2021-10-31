#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"


namespace java::util
{
	class AbstractQueue : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueue(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void clear();
		jobject element();
		jobject remove();
	};
} // namespace java::util

