#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::media
{
	class TimedMetaData : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimedMetaData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimedMetaData(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TimedMetaData(jlong arg0, JByteArray arg1);
		
		// Methods
		JByteArray getMetaData() const;
		jlong getTimestamp() const;
	};
} // namespace android::media
