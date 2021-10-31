#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace org::xml::sax
{
	class InputSource;
}

namespace javax::xml::transform::sax
{
	class SAXSource : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SAXSource(QAndroidJniObject obj);
		
		// Constructors
		SAXSource();
		SAXSource(org::xml::sax::InputSource arg0);
		SAXSource(__JniBaseClass arg0, org::xml::sax::InputSource arg1);
		
		// Methods
		static org::xml::sax::InputSource sourceToInputSource(__JniBaseClass arg0);
		org::xml::sax::InputSource getInputSource();
		jstring getSystemId();
		__JniBaseClass getXMLReader();
		jboolean isEmpty();
		void setInputSource(org::xml::sax::InputSource arg0);
		void setSystemId(jstring arg0);
		void setXMLReader(__JniBaseClass arg0);
	};
} // namespace javax::xml::transform::sax

