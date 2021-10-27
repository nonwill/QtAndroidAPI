#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::tv
{
	class TvContentRating : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject UNRATED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3);
		static QAndroidJniObject createRating(const QString &arg0, const QString &arg1, const QString &arg2, jarray arg3);
		static QAndroidJniObject unflattenFromString(jstring arg0);
		static QAndroidJniObject unflattenFromString(const QString &arg0);
		jboolean contains(__jni_impl::android::media::tv::TvContentRating arg0);
		jboolean equals(jobject arg0);
		jstring flattenToString();
		jstring getDomain();
		jstring getMainRating();
		jstring getRatingSystem();
		QAndroidJniObject getSubRatings();
		jint hashCode();
	};
} // namespace __jni_impl::android::media::tv


namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvContentRating::UNRATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContentRating",
			"UNRATED",
			"Landroid/media/tv/TvContentRating;"
		);
	}
	
	// Constructors
	void TvContentRating::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContentRating",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TvContentRating::createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"createRating",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject TvContentRating::createRating(const QString &arg0, const QString &arg1, const QString &arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"createRating",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	QAndroidJniObject TvContentRating::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0
		);
	}
	QAndroidJniObject TvContentRating::unflattenFromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean TvContentRating::contains(__jni_impl::android::media::tv::TvContentRating arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContentRating::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring TvContentRating::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getDomain()
	{
		return __thiz.callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getMainRating()
	{
		return __thiz.callObjectMethod(
			"getMainRating",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getRatingSystem()
	{
		return __thiz.callObjectMethod(
			"getRatingSystem",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TvContentRating::getSubRatings()
	{
		return __thiz.callObjectMethod(
			"getSubRatings",
			"()Ljava/util/List;"
		);
	}
	jint TvContentRating::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContentRating : public __jni_impl::android::media::tv::TvContentRating
	{
	public:
		TvContentRating(QAndroidJniObject obj) { __thiz = obj; }
		TvContentRating()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

