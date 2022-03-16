#pragma once

#include "../../../JDoubleArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../../JArray.hpp"
#include "./GenericDocument.def.hpp"
#include "../../../JString.hpp"
#include "./GenericDocument_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline GenericDocument_Builder::GenericDocument_Builder(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.app.appsearch.GenericDocument$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::GenericDocument GenericDocument_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setCreationTimestampMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setCreationTimestampMillis",
			"(J)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyBoolean(JString arg0, JBooleanArray arg1) const
	{
		return callObjectMethod(
			"setPropertyBoolean",
			"(Ljava/lang/String;[Z)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0.object<jstring>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyBytes(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"setPropertyBytes",
			"(Ljava/lang/String;[[B)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyDocument(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"setPropertyDocument",
			"(Ljava/lang/String;[Landroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyDouble(JString arg0, JDoubleArray arg1) const
	{
		return callObjectMethod(
			"setPropertyDouble",
			"(Ljava/lang/String;[D)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0.object<jstring>(),
			arg1.object<jdoubleArray>()
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyLong(JString arg0, JLongArray arg1) const
	{
		return callObjectMethod(
			"setPropertyLong",
			"(Ljava/lang/String;[J)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0.object<jstring>(),
			arg1.object<jlongArray>()
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyString(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"setPropertyString",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setScore(jint arg0) const
	{
		return callObjectMethod(
			"setScore",
			"(I)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setTtlMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTtlMillis",
			"(J)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

