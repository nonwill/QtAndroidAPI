#pragma once

#include "./TextView.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
class JString;
class JString;

namespace android::widget
{
	class Chronometer : public android::widget::TextView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Chronometer(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		Chronometer(QJniObject obj);
		
		// Constructors
		Chronometer(android::content::Context arg0);
		Chronometer(android::content::Context arg0, JObject arg1);
		Chronometer(android::content::Context arg0, JObject arg1, jint arg2);
		Chronometer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName();
		jlong getBase();
		JString getContentDescription();
		JString getFormat();
		JObject getOnChronometerTickListener();
		jboolean isCountDown();
		jboolean isTheFinalCountDown();
		void setBase(jlong arg0);
		void setCountDown(jboolean arg0);
		void setFormat(JString arg0);
		void setOnChronometerTickListener(JObject arg0);
		void start();
		void stop();
	};
} // namespace android::widget

