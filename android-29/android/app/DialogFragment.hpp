#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Fragment.hpp"

namespace android::app
{
	class Dialog;
}
namespace android::app
{
	class FragmentManager;
}
namespace android::app
{
	class FragmentTransaction;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class LayoutInflater;
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
	class DialogFragment : public android::app::Fragment
	{
	public:
		// Fields
		static jint STYLE_NORMAL();
		static jint STYLE_NO_FRAME();
		static jint STYLE_NO_INPUT();
		static jint STYLE_NO_TITLE();
		
		DialogFragment(QAndroidJniObject obj);
		// Constructors
		DialogFragment();
		
		// Methods
		void dismiss();
		void dismissAllowingStateLoss();
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		void dump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		QAndroidJniObject getDialog();
		jboolean getShowsDialog();
		jint getTheme();
		jboolean isCancelable();
		void onActivityCreated(android::os::Bundle arg0);
		void onAttach(android::content::Context arg0);
		void onCancel(__JniBaseClass arg0);
		void onCreate(android::os::Bundle arg0);
		QAndroidJniObject onCreateDialog(android::os::Bundle arg0);
		void onDestroyView();
		void onDetach();
		void onDismiss(__JniBaseClass arg0);
		QAndroidJniObject onGetLayoutInflater(android::os::Bundle arg0);
		void onSaveInstanceState(android::os::Bundle arg0);
		void onStart();
		void onStop();
		void setCancelable(jboolean arg0);
		void setShowsDialog(jboolean arg0);
		void setStyle(jint arg0, jint arg1);
		jint show(android::app::FragmentTransaction arg0, jstring arg1);
		jint show(android::app::FragmentTransaction arg0, const QString &arg1);
		void show(android::app::FragmentManager arg0, jstring arg1);
		void show(android::app::FragmentManager arg0, const QString &arg1);
	};
} // namespace android::app

