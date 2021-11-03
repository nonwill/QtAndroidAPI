#pragma once

#include "../../JObject.hpp"

class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JString;
class JThrowable;
namespace java::lang
{
	class Void;
}
namespace java::lang::reflect
{
	class Constructor;
}
namespace java::lang::reflect
{
	class Method;
}
namespace java::net
{
	class URL;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::util
{
	class Optional;
}

namespace java::util
{
	class ServiceLoader : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceLoader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceLoader(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::ServiceLoader load(JClass arg0);
		static java::util::ServiceLoader load(JClass arg0, java::lang::ClassLoader arg1);
		static java::util::ServiceLoader load(JObject arg0, JClass arg1);
		static java::util::ServiceLoader loadInstalled(JClass arg0);
		java::util::Optional findFirst();
		JObject iterator();
		void reload();
		JObject stream();
		JString toString();
	};
} // namespace java::util

