#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Enum.hpp"


namespace java::lang
{
	class ProcessBuilder_Redirect_Type : public java::lang::Enum
	{
	public:
		// Fields
		static java::lang::ProcessBuilder_Redirect_Type APPEND();
		static java::lang::ProcessBuilder_Redirect_Type INHERIT();
		static java::lang::ProcessBuilder_Redirect_Type PIPE();
		static java::lang::ProcessBuilder_Redirect_Type READ();
		static java::lang::ProcessBuilder_Redirect_Type WRITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProcessBuilder_Redirect_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ProcessBuilder_Redirect_Type(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::ProcessBuilder_Redirect_Type valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang

