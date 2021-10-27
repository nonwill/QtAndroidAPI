#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Fragment;
}
namespace android::app
{
	class Fragment_SavedState;
}
namespace android::app
{
	class FragmentManager_FragmentLifecycleCallbacks;
}
namespace android::app
{
	class FragmentTransaction;
}
namespace android::os
{
	class Bundle;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::app
{
	class FragmentManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint POP_BACK_STACK_INCLUSIVE();
		
		FragmentManager(QAndroidJniObject obj);
		// Constructors
		FragmentManager();
		
		// Methods
		static void enableDebugLogging(jboolean arg0);
		void addOnBackStackChangedListener(__JniBaseClass arg0);
		QAndroidJniObject beginTransaction();
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		void dump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		jboolean executePendingTransactions();
		QAndroidJniObject findFragmentById(jint arg0);
		QAndroidJniObject findFragmentByTag(jstring arg0);
		QAndroidJniObject findFragmentByTag(const QString &arg0);
		QAndroidJniObject getBackStackEntryAt(jint arg0);
		jint getBackStackEntryCount();
		QAndroidJniObject getFragment(android::os::Bundle arg0, jstring arg1);
		QAndroidJniObject getFragment(android::os::Bundle arg0, const QString &arg1);
		QAndroidJniObject getFragments();
		QAndroidJniObject getPrimaryNavigationFragment();
		void invalidateOptionsMenu();
		jboolean isDestroyed();
		jboolean isStateSaved();
		void popBackStack();
		void popBackStack(jint arg0, jint arg1);
		void popBackStack(jstring arg0, jint arg1);
		void popBackStack(const QString &arg0, jint arg1);
		jboolean popBackStackImmediate();
		jboolean popBackStackImmediate(jint arg0, jint arg1);
		jboolean popBackStackImmediate(jstring arg0, jint arg1);
		jboolean popBackStackImmediate(const QString &arg0, jint arg1);
		void putFragment(android::os::Bundle arg0, jstring arg1, android::app::Fragment arg2);
		void putFragment(android::os::Bundle arg0, const QString &arg1, android::app::Fragment arg2);
		void registerFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0, jboolean arg1);
		void removeOnBackStackChangedListener(__JniBaseClass arg0);
		QAndroidJniObject saveFragmentInstanceState(android::app::Fragment arg0);
		void unregisterFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0);
	};
} // namespace android::app

