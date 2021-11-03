#include "./Migrator.hpp"
#include "./PackageIdentifier.hpp"
#include "./SetSchemaRequest.hpp"
#include "./SetSchemaRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SetSchemaRequest_Builder::SetSchemaRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SetSchemaRequest_Builder::SetSchemaRequest_Builder()
		: JObject(
			"android.app.appsearch.SetSchemaRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::addSchemas(jarray arg0)
	{
		return callObjectMethod(
			"addSchemas",
			"([Landroid/app/appsearch/AppSearchSchema;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0
		);
	}
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::addSchemas(JObject arg0)
	{
		return callObjectMethod(
			"addSchemas",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SetSchemaRequest SetSchemaRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SetSchemaRequest;"
		);
	}
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setForceOverride(jboolean arg0)
	{
		return callObjectMethod(
			"setForceOverride",
			"(Z)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0
		);
	}
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setMigrator(jstring arg0, android::app::appsearch::Migrator arg1)
	{
		return callObjectMethod(
			"setMigrator",
			"(Ljava/lang/String;Landroid/app/appsearch/Migrator;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setMigrators(JObject arg0)
	{
		return callObjectMethod(
			"setMigrators",
			"(Ljava/util/Map;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setSchemaTypeDisplayedBySystem(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"setSchemaTypeDisplayedBySystem",
			"(Ljava/lang/String;Z)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setSchemaTypeVisibilityForPackage(jstring arg0, jboolean arg1, android::app::appsearch::PackageIdentifier arg2)
	{
		return callObjectMethod(
			"setSchemaTypeVisibilityForPackage",
			"(Ljava/lang/String;ZLandroid/app/appsearch/PackageIdentifier;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setVersion(jint arg0)
	{
		return callObjectMethod(
			"setVersion",
			"(I)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

