#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class DataSetObserver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataSetObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataSetObserver(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DataSetObserver();
		
		// Methods
		void onChanged() const;
		void onInvalidated() const;
	};
} // namespace android::database
