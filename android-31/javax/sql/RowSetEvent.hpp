#pragma once

#include "../../java/util/EventObject.hpp"

namespace javax::sql
{
	class RowSetEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RowSetEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		RowSetEvent(QAndroidJniObject obj);
		
		// Constructors
		RowSetEvent(JObject arg0);
		
		// Methods
	};
} // namespace javax::sql

