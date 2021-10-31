#include "./BidiFormatter.hpp"
#include "../../java/util/Locale.hpp"
#include "./BidiFormatter_Builder.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	BidiFormatter_Builder::BidiFormatter_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BidiFormatter_Builder::BidiFormatter_Builder()
		: __JniBaseClass(
			"android.text.BidiFormatter$Builder",
			"()V"
		) {}
	BidiFormatter_Builder::BidiFormatter_Builder(jboolean arg0)
		: __JniBaseClass(
			"android.text.BidiFormatter$Builder",
			"(Z)V",
			arg0
		) {}
	BidiFormatter_Builder::BidiFormatter_Builder(java::util::Locale arg0)
		: __JniBaseClass(
			"android.text.BidiFormatter$Builder",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	android::text::BidiFormatter BidiFormatter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/BidiFormatter;"
		);
	}
	android::text::BidiFormatter_Builder BidiFormatter_Builder::setTextDirectionHeuristic(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setTextDirectionHeuristic",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/BidiFormatter$Builder;",
			arg0.object()
		);
	}
	android::text::BidiFormatter_Builder BidiFormatter_Builder::stereoReset(jboolean arg0)
	{
		return callObjectMethod(
			"stereoReset",
			"(Z)Landroid/text/BidiFormatter$Builder;",
			arg0
		);
	}
} // namespace android::text
