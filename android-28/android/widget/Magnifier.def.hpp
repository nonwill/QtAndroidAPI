#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}

namespace android::widget
{
	class Magnifier : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Magnifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Magnifier(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Magnifier(android::view::View arg0);
		
		// Methods
		void dismiss() const;
		jint getHeight() const;
		jint getWidth() const;
		jfloat getZoom() const;
		void show(jfloat arg0, jfloat arg1) const;
		void update() const;
	};
} // namespace android::widget
