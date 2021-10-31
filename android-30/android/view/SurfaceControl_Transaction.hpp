#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class SurfaceControl;
}

namespace android::view
{
	class SurfaceControl_Transaction : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_Transaction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_Transaction(QJniObject obj);
		
		// Constructors
		SurfaceControl_Transaction();
		
		// Methods
		void apply();
		void close();
		jint describeContents();
		android::view::SurfaceControl_Transaction merge(android::view::SurfaceControl_Transaction arg0);
		android::view::SurfaceControl_Transaction reparent(android::view::SurfaceControl arg0, android::view::SurfaceControl arg1);
		android::view::SurfaceControl_Transaction setAlpha(android::view::SurfaceControl arg0, jfloat arg1);
		android::view::SurfaceControl_Transaction setBufferSize(android::view::SurfaceControl arg0, jint arg1, jint arg2);
		android::view::SurfaceControl_Transaction setFrameRate(android::view::SurfaceControl arg0, jfloat arg1, jint arg2);
		android::view::SurfaceControl_Transaction setGeometry(android::view::SurfaceControl arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3);
		android::view::SurfaceControl_Transaction setLayer(android::view::SurfaceControl arg0, jint arg1);
		android::view::SurfaceControl_Transaction setVisibility(android::view::SurfaceControl arg0, jboolean arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

