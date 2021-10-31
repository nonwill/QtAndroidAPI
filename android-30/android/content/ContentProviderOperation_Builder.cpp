#include "./ContentProviderOperation.hpp"
#include "./ContentValues.hpp"
#include "../os/Bundle.hpp"
#include "./ContentProviderOperation_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentProviderOperation_Builder::ContentProviderOperation_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::content::ContentProviderOperation ContentProviderOperation_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ContentProviderOperation;"
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExceptionAllowed(jboolean arg0)
	{
		return callObjectMethod(
			"withExceptionAllowed",
			"(Z)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExpectedCount(jint arg0)
	{
		return callObjectMethod(
			"withExpectedCount",
			"(I)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtra(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"withExtra",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtraBackReference(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"withExtraBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtraBackReference(jstring arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"withExtraBackReference",
			"(Ljava/lang/String;ILjava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"withExtras",
			"(Landroid/os/Bundle;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelection(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"withSelection",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelectionBackReference(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"withSelectionBackReference",
			"(II)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelectionBackReference(jint arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"withSelectionBackReference",
			"(IILjava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValue(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"withValue",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReference(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReference(jstring arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;ILjava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReferences(android::content::ContentValues arg0)
	{
		return callObjectMethod(
			"withValueBackReferences",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValues(android::content::ContentValues arg0)
	{
		return callObjectMethod(
			"withValues",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withYieldAllowed(jboolean arg0)
	{
		return callObjectMethod(
			"withYieldAllowed",
			"(Z)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
} // namespace android::content
