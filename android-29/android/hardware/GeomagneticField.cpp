#include "./GeomagneticField.hpp"

namespace android::hardware
{
	// Fields
	
	GeomagneticField::GeomagneticField(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GeomagneticField::GeomagneticField(jfloat &arg0, jfloat &arg1, jfloat &arg2, jlong &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.GeomagneticField",
			"(FFFJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jfloat GeomagneticField::getDeclination()
	{
		return __thiz.callMethod<jfloat>(
			"getDeclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getFieldStrength()
	{
		return __thiz.callMethod<jfloat>(
			"getFieldStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getHorizontalStrength()
	{
		return __thiz.callMethod<jfloat>(
			"getHorizontalStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getInclination()
	{
		return __thiz.callMethod<jfloat>(
			"getInclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getX()
	{
		return __thiz.callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat GeomagneticField::getY()
	{
		return __thiz.callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat GeomagneticField::getZ()
	{
		return __thiz.callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
} // namespace android::hardware
