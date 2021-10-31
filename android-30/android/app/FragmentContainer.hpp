#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::app
{
	class FragmentContainer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FragmentContainer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FragmentContainer(QJniObject obj);
		
		// Constructors
		FragmentContainer();
		
		// Methods
		android::view::View onFindViewById(jint arg0);
		jboolean onHasView();
	};
} // namespace android::app

