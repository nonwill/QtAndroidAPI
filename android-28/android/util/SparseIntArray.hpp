#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class SparseIntArray : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SparseIntArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SparseIntArray(QJniObject obj);
		
		// Constructors
		SparseIntArray();
		SparseIntArray(jint arg0);
		
		// Methods
		void append(jint arg0, jint arg1);
		void clear();
		android::util::SparseIntArray clone();
		void _delete(jint arg0);
		jint get(jint arg0);
		jint get(jint arg0, jint arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jint arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, jint arg1);
		void removeAt(jint arg0);
		jint size();
		jstring toString();
		jint valueAt(jint arg0);
	};
} // namespace android::util

