#pragma once

#include "../../__JniBaseClass.hpp"

namespace org::json
{
	class JSONObject;
}
namespace org::json
{
	class JSONTokener;
}

namespace org::json
{
	class JSONArray : public __JniBaseClass
	{
	public:
		// Fields
		
		JSONArray(QAndroidJniObject obj);
		// Constructors
		JSONArray();
		JSONArray(jobject &arg0);
		JSONArray(jstring &arg0);
		JSONArray(const QString &arg0);
		JSONArray(__JniBaseClass &arg0);
		JSONArray(org::json::JSONTokener &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jobject get(jint arg0);
		jboolean getBoolean(jint arg0);
		jdouble getDouble(jint arg0);
		jint getInt(jint arg0);
		QAndroidJniObject getJSONArray(jint arg0);
		QAndroidJniObject getJSONObject(jint arg0);
		jlong getLong(jint arg0);
		jstring getString(jint arg0);
		jint hashCode();
		jboolean isNull(jint arg0);
		jstring join(jstring arg0);
		jstring join(const QString &arg0);
		jint length();
		jobject opt(jint arg0);
		jboolean optBoolean(jint arg0);
		jboolean optBoolean(jint arg0, jboolean arg1);
		jdouble optDouble(jint arg0);
		jdouble optDouble(jint arg0, jdouble arg1);
		jint optInt(jint arg0);
		jint optInt(jint arg0, jint arg1);
		QAndroidJniObject optJSONArray(jint arg0);
		QAndroidJniObject optJSONObject(jint arg0);
		jlong optLong(jint arg0);
		jlong optLong(jint arg0, jlong arg1);
		jstring optString(jint arg0);
		jstring optString(jint arg0, jstring arg1);
		jstring optString(jint arg0, const QString &arg1);
		QAndroidJniObject put(jboolean arg0);
		QAndroidJniObject put(jdouble arg0);
		QAndroidJniObject put(jint arg0);
		QAndroidJniObject put(jobject arg0);
		QAndroidJniObject put(jlong arg0);
		QAndroidJniObject put(jint arg0, jboolean arg1);
		QAndroidJniObject put(jint arg0, jdouble arg1);
		QAndroidJniObject put(jint arg0, jint arg1);
		QAndroidJniObject put(jint arg0, jobject arg1);
		QAndroidJniObject put(jint arg0, jlong arg1);
		jobject remove(jint arg0);
		QAndroidJniObject toJSONObject(org::json::JSONArray arg0);
		jstring toString();
		jstring toString(jint arg0);
	};
} // namespace org::json

