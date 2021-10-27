#include "./DatatypeConfigurationException.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	DatatypeConfigurationException::DatatypeConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DatatypeConfigurationException::DatatypeConfigurationException()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"()V"
		);
	}
	DatatypeConfigurationException::DatatypeConfigurationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DatatypeConfigurationException::DatatypeConfigurationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	DatatypeConfigurationException::DatatypeConfigurationException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	DatatypeConfigurationException::DatatypeConfigurationException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	DatatypeConfigurationException::DatatypeConfigurationException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace javax::xml::datatype
