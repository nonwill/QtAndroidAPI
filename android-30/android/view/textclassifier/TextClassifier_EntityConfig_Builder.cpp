#include "./TextClassifier_EntityConfig.hpp"
#include "./TextClassifier_EntityConfig_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextClassifier_EntityConfig_Builder::TextClassifier_EntityConfig_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextClassifier_EntityConfig_Builder::TextClassifier_EntityConfig_Builder()
		: __JniBaseClass(
			"android.view.textclassifier.TextClassifier$EntityConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::includeTypesFromTextClassifier(jboolean arg0)
	{
		return callObjectMethod(
			"includeTypesFromTextClassifier",
			"(Z)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setExcludedTypes(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setExcludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setHints(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig_Builder TextClassifier_EntityConfig_Builder::setIncludedTypes(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setIncludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier
