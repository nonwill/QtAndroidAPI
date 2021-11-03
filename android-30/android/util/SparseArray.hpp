#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class SparseArray : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SparseArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SparseArray(QAndroidJniObject obj);
		
		// Constructors
		SparseArray();
		SparseArray(jint arg0);
		
		// Methods
		void append(jint arg0, JObject arg1);
		void clear();
		android::util::SparseArray clone();
		jboolean contains(jint arg0);
		void _delete(jint arg0);
		JObject get(jint arg0);
		JObject get(jint arg0, JObject arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(JObject arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, JObject arg1);
		void remove(jint arg0);
		void removeAt(jint arg0);
		void removeAtRange(jint arg0, jint arg1);
		void setValueAt(jint arg0, JObject arg1);
		jint size();
		JString toString();
		JObject valueAt(jint arg0);
	};
} // namespace android::util

