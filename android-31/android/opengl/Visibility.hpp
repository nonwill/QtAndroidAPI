#pragma once

#include "../../JObject.hpp"


namespace android::opengl
{
	class Visibility : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Visibility(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Visibility(QJniObject obj);
		
		// Constructors
		Visibility();
		
		// Methods
		static void computeBoundingSphere(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static jint frustumCullSpheres(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4, jintArray arg5, jint arg6, jint arg7);
		static jint visibilityTest(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jcharArray arg4, jint arg5, jint arg6);
	};
} // namespace android::opengl

