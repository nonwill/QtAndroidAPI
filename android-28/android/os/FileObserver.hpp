#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::os
{
	class FileObserver : public JObject
	{
	public:
		// Fields
		static jint ACCESS();
		static jint ALL_EVENTS();
		static jint ATTRIB();
		static jint CLOSE_NOWRITE();
		static jint CLOSE_WRITE();
		static jint CREATE();
		static jint DELETE();
		static jint DELETE_SELF();
		static jint MODIFY();
		static jint MOVED_FROM();
		static jint MOVED_TO();
		static jint MOVE_SELF();
		static jint OPEN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileObserver(QAndroidJniObject obj);
		
		// Constructors
		FileObserver(JString arg0);
		FileObserver(JString arg0, jint arg1);
		
		// Methods
		void onEvent(jint arg0, JString arg1) const;
		void startWatching() const;
		void stopWatching() const;
	};
} // namespace android::os

