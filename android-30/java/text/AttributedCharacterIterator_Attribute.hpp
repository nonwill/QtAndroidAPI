#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class AttributedCharacterIterator_Attribute : public __JniBaseClass
	{
	public:
		// Fields
		static java::text::AttributedCharacterIterator_Attribute INPUT_METHOD_SEGMENT();
		static java::text::AttributedCharacterIterator_Attribute LANGUAGE();
		static java::text::AttributedCharacterIterator_Attribute READING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttributedCharacterIterator_Attribute(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AttributedCharacterIterator_Attribute(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::text

