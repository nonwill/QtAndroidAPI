#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::app
{
	class Fragment_InstantiationException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Fragment_InstantiationException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		Fragment_InstantiationException(QJniObject obj);
		
		// Constructors
		Fragment_InstantiationException(jstring arg0, java::lang::Exception arg1);
		
		// Methods
	};
} // namespace android::app

