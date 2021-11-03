#pragma once

#include "./AbstractCursor.hpp"

class JByteArray;
namespace android::database
{
	class CharArrayBuffer;
}
namespace android::database
{
	class CursorWindow;
}
class JString;

namespace android::database
{
	class AbstractWindowedCursor : public android::database::AbstractCursor
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractWindowedCursor(const char *className, const char *sig, Ts...agv) : android::database::AbstractCursor(className, sig, std::forward<Ts>(agv)...) {}
		AbstractWindowedCursor(QAndroidJniObject obj);
		
		// Constructors
		AbstractWindowedCursor();
		
		// Methods
		void copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1);
		JByteArray getBlob(jint arg0);
		jdouble getDouble(jint arg0);
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jshort getShort(jint arg0);
		JString getString(jint arg0);
		jint getType(jint arg0);
		android::database::CursorWindow getWindow();
		jboolean hasWindow();
		jboolean isBlob(jint arg0);
		jboolean isFloat(jint arg0);
		jboolean isLong(jint arg0);
		jboolean isNull(jint arg0);
		jboolean isString(jint arg0);
		void setWindow(android::database::CursorWindow arg0);
	};
} // namespace android::database

