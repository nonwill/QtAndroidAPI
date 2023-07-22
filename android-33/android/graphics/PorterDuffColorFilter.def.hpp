#pragma once

#include "./ColorFilter.def.hpp"

namespace android::graphics
{
	class PorterDuff_Mode;
}
class JObject;

namespace android::graphics
{
	class PorterDuffColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PorterDuffColorFilter(const char *className, const char *sig, Ts...agv) : android::graphics::ColorFilter(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuffColorFilter(QAndroidJniObject obj) : android::graphics::ColorFilter(obj) {}
		
		// Constructors
		PorterDuffColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::graphics

