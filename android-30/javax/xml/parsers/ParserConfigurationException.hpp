#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::xml::parsers
{
	class ParserConfigurationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParserConfigurationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ParserConfigurationException(QAndroidJniObject obj);
		
		// Constructors
		ParserConfigurationException();
		ParserConfigurationException(jstring arg0);
		
		// Methods
	};
} // namespace javax::xml::parsers
