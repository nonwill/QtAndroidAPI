#include "./Normalizer_Form.hpp"

namespace java::text
{
	// Fields
	QAndroidJniObject Normalizer_Form::NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFC",
			"Ljava/text/Normalizer$Form;"
		);
	}
	QAndroidJniObject Normalizer_Form::NFD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFD",
			"Ljava/text/Normalizer$Form;"
		);
	}
	QAndroidJniObject Normalizer_Form::NFKC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFKC",
			"Ljava/text/Normalizer$Form;"
		);
	}
	QAndroidJniObject Normalizer_Form::NFKD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFKD",
			"Ljava/text/Normalizer$Form;"
		);
	}
	
	Normalizer_Form::Normalizer_Form(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Normalizer_Form::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"valueOf",
			"(Ljava/lang/String;)Ljava/text/Normalizer$Form;",
			arg0
		);
	}
	QAndroidJniObject Normalizer_Form::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"valueOf",
			"(Ljava/lang/String;)Ljava/text/Normalizer$Form;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Normalizer_Form::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"values",
			"()[Ljava/text/Normalizer$Form;"
		).object<jarray>();
	}
} // namespace java::text
