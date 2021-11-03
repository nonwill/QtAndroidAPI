#pragma once

#include "../../JObject.hpp"


namespace java::lang
{
	class Error : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Error(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Error(QJniObject obj);
		
		// Constructors
		Error();
		Error(jstring arg0);
		Error(jthrowable arg0);
		Error(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

