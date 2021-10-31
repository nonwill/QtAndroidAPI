#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::text
{
	class Format_Field;
}

namespace java::text
{
	class FieldPosition : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldPosition(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FieldPosition(QJniObject obj);
		
		// Constructors
		FieldPosition(jint arg0);
		FieldPosition(java::text::Format_Field arg0);
		FieldPosition(java::text::Format_Field arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBeginIndex();
		jint getEndIndex();
		jint getField();
		java::text::Format_Field getFieldAttribute();
		jint hashCode();
		void setBeginIndex(jint arg0);
		void setEndIndex(jint arg0);
		jstring toString();
	};
} // namespace java::text

