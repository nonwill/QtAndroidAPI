#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class TimeZone_SystemTimeZoneType;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::lang
{
	class Integer;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::icu::util
{
	class TimeZone : public __JniBaseClass
	{
	public:
		// Fields
		static jint GENERIC_LOCATION();
		static QAndroidJniObject GMT_ZONE();
		static jint LONG();
		static jint LONG_GENERIC();
		static jint LONG_GMT();
		static jint SHORT();
		static jint SHORT_COMMONLY_USED();
		static jint SHORT_GENERIC();
		static jint SHORT_GMT();
		static jint TIMEZONE_ICU();
		static jint TIMEZONE_JDK();
		static QAndroidJniObject UNKNOWN_ZONE();
		static jstring UNKNOWN_ZONE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint countEquivalentIDs(jstring arg0);
		static jint countEquivalentIDs(const QString &arg0);
		static jarray getAvailableIDs();
		static jarray getAvailableIDs(jint arg0);
		static jarray getAvailableIDs(jstring arg0);
		static jarray getAvailableIDs(const QString &arg0);
		static QAndroidJniObject getAvailableIDs(__jni_impl::android::icu::util::TimeZone_SystemTimeZoneType arg0, jstring arg1, __jni_impl::java::lang::Integer arg2);
		static QAndroidJniObject getAvailableIDs(__jni_impl::android::icu::util::TimeZone_SystemTimeZoneType arg0, const QString &arg1, __jni_impl::java::lang::Integer arg2);
		static jstring getCanonicalID(jstring arg0);
		static jstring getCanonicalID(const QString &arg0);
		static jstring getCanonicalID(jstring arg0, jbooleanArray arg1);
		static jstring getCanonicalID(const QString &arg0, jbooleanArray arg1);
		static QAndroidJniObject getDefault();
		static jstring getEquivalentID(jstring arg0, jint arg1);
		static jstring getEquivalentID(const QString &arg0, jint arg1);
		static QAndroidJniObject getFrozenTimeZone(jstring arg0);
		static QAndroidJniObject getFrozenTimeZone(const QString &arg0);
		static jstring getIDForWindowsID(jstring arg0, jstring arg1);
		static jstring getIDForWindowsID(const QString &arg0, const QString &arg1);
		static jstring getRegion(jstring arg0);
		static jstring getRegion(const QString &arg0);
		static jstring getTZDataVersion();
		static QAndroidJniObject getTimeZone(jstring arg0);
		static QAndroidJniObject getTimeZone(const QString &arg0);
		static QAndroidJniObject getTimeZone(jstring arg0, jint arg1);
		static QAndroidJniObject getTimeZone(const QString &arg0, jint arg1);
		static jstring getWindowsID(jstring arg0);
		static jstring getWindowsID(const QString &arg0);
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		jint getDSTSavings();
		jstring getDisplayName();
		jstring getDisplayName(__jni_impl::android::icu::util::ULocale arg0);
		jstring getDisplayName(__jni_impl::java::util::Locale arg0);
		jstring getDisplayName(jboolean arg0, jint arg1);
		jstring getDisplayName(jboolean arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2);
		jstring getDisplayName(jboolean arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		jstring getID();
		jint getOffset(jlong arg0);
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void getOffset(jlong arg0, jboolean arg1, jintArray arg2);
		jint getRawOffset();
		jboolean hasSameRules(__jni_impl::android::icu::util::TimeZone arg0);
		jint hashCode();
		jboolean inDaylightTime(__jni_impl::java::util::Date arg0);
		jboolean isFrozen();
		jboolean observesDaylightTime();
		void setID(jstring arg0);
		void setID(const QString &arg0);
		void setRawOffset(jint arg0);
		jboolean useDaylightTime();
	};
} // namespace __jni_impl::android::icu::util

#include "./TimeZone_SystemTimeZoneType.hpp"
#include "./ULocale.hpp"
#include "../../../java/lang/Integer.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint TimeZone::GENERIC_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"GENERIC_LOCATION"
		);
	}
	QAndroidJniObject TimeZone::GMT_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone",
			"GMT_ZONE",
			"Landroid/icu/util/TimeZone;"
		);
	}
	jint TimeZone::LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG"
		);
	}
	jint TimeZone::LONG_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GENERIC"
		);
	}
	jint TimeZone::LONG_GMT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GMT"
		);
	}
	jint TimeZone::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT"
		);
	}
	jint TimeZone::SHORT_COMMONLY_USED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_COMMONLY_USED"
		);
	}
	jint TimeZone::SHORT_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GENERIC"
		);
	}
	jint TimeZone::SHORT_GMT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GMT"
		);
	}
	jint TimeZone::TIMEZONE_ICU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_ICU"
		);
	}
	jint TimeZone::TIMEZONE_JDK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_JDK"
		);
	}
	QAndroidJniObject TimeZone::UNKNOWN_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE",
			"Landroid/icu/util/TimeZone;"
		);
	}
	jstring TimeZone::UNKNOWN_ZONE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void TimeZone::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TimeZone",
			"()V"
		);
	}
	
	// Methods
	jint TimeZone::countEquivalentIDs(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.util.TimeZone",
			"countEquivalentIDs",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint TimeZone::countEquivalentIDs(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.util.TimeZone",
			"countEquivalentIDs",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TimeZone::getAvailableIDs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray TimeZone::getAvailableIDs(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray TimeZone::getAvailableIDs(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray TimeZone::getAvailableIDs(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject TimeZone::getAvailableIDs(__jni_impl::android::icu::util::TimeZone_SystemTimeZoneType arg0, jstring arg1, __jni_impl::java::lang::Integer arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Landroid/icu/util/TimeZone$SystemTimeZoneType;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/Set;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZone::getAvailableIDs(__jni_impl::android::icu::util::TimeZone_SystemTimeZoneType arg0, const QString &arg1, __jni_impl::java::lang::Integer arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Landroid/icu/util/TimeZone$SystemTimeZoneType;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/Set;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	jstring TimeZone::getCanonicalID(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZone::getCanonicalID(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring TimeZone::getCanonicalID(jstring arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;[Z)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZone::getCanonicalID(const QString &arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;[Z)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	QAndroidJniObject TimeZone::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getDefault",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jstring TimeZone::getEquivalentID(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getEquivalentID",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZone::getEquivalentID(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getEquivalentID",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	QAndroidJniObject TimeZone::getFrozenTimeZone(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getFrozenTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0
		);
	}
	QAndroidJniObject TimeZone::getFrozenTimeZone(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getFrozenTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TimeZone::getIDForWindowsID(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getIDForWindowsID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZone::getIDForWindowsID(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getIDForWindowsID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring TimeZone::getRegion(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getRegion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZone::getRegion(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getRegion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring TimeZone::getTZDataVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTZDataVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TimeZone::getTimeZone(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0
		);
	}
	QAndroidJniObject TimeZone::getTimeZone(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TimeZone::getTimeZone(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;I)Landroid/icu/util/TimeZone;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TimeZone::getTimeZone(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;I)Landroid/icu/util/TimeZone;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring TimeZone::getWindowsID(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getWindowsID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZone::getWindowsID(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getWindowsID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jobject TimeZone::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TimeZone::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jboolean TimeZone::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject TimeZone::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jint TimeZone::getDSTSavings()
	{
		return __thiz.callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	jstring TimeZone::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZILandroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZone::getID()
	{
		return __thiz.callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TimeZone::getOffset(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	jint TimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"(IIIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void TimeZone::getOffset(jlong arg0, jboolean arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"getOffset",
			"(JZ[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint TimeZone::getRawOffset()
	{
		return __thiz.callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	jboolean TimeZone::hasSameRules(__jni_impl::android::icu::util::TimeZone arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasSameRules",
			"(Landroid/icu/util/TimeZone;)Z",
			arg0.__jniObject().object()
		);
	}
	jint TimeZone::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean TimeZone::inDaylightTime(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TimeZone::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	jboolean TimeZone::observesDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	void TimeZone::setID(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TimeZone::setID(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TimeZone::setRawOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	jboolean TimeZone::useDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class TimeZone : public __jni_impl::android::icu::util::TimeZone
	{
	public:
		TimeZone(QAndroidJniObject obj) { __thiz = obj; }
		TimeZone()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

