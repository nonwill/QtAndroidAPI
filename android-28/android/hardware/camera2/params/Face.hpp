#pragma once

#include "../../../../JObject.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}
class JString;

namespace android::hardware::camera2::params
{
	class Face : public JObject
	{
	public:
		// Fields
		static jint ID_UNSUPPORTED();
		static jint SCORE_MAX();
		static jint SCORE_MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Face(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Face(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Rect getBounds() const;
		jint getId() const;
		android::graphics::Point getLeftEyePosition() const;
		android::graphics::Point getMouthPosition() const;
		android::graphics::Point getRightEyePosition() const;
		jint getScore() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

