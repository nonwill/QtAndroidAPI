#pragma once

#include "../../../../JObject.hpp"

namespace android::util
{
	class Rational;
}

namespace android::hardware::camera2::params
{
	class ColorSpaceTransform : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorSpaceTransform(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpaceTransform(QJniObject obj);
		
		// Constructors
		ColorSpaceTransform(jintArray arg0);
		ColorSpaceTransform(jarray arg0);
		
		// Methods
		void copyElements(jintArray arg0, jint arg1);
		void copyElements(jarray arg0, jint arg1);
		jboolean equals(jobject arg0);
		android::util::Rational getElement(jint arg0, jint arg1);
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

