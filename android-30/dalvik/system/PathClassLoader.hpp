#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"

namespace java::lang
{
	class ClassLoader;
}

namespace dalvik::system
{
	class PathClassLoader : public dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PathClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::BaseDexClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		PathClassLoader(QJniObject obj);
		
		// Constructors
		PathClassLoader(jstring arg0, java::lang::ClassLoader arg1);
		PathClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2);
		
		// Methods
	};
} // namespace dalvik::system

