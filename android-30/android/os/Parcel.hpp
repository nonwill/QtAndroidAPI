#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::util
{
	class ArrayMap;
}
namespace android::util
{
	class Size;
}
namespace android::util
{
	class SizeF;
}
namespace android::util
{
	class SparseArray;
}
namespace android::util
{
	class SparseBooleanArray;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Exception;
}
namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class HashMap;
}

namespace android::os
{
	class Parcel : public JObject
	{
	public:
		// Fields
		static JObject STRING_CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Parcel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Parcel(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::Parcel obtain();
		void appendFrom(android::os::Parcel arg0, jint arg1, jint arg2);
		jarray createBinderArray();
		java::util::ArrayList createBinderArrayList();
		jbooleanArray createBooleanArray();
		jbyteArray createByteArray();
		jcharArray createCharArray();
		jdoubleArray createDoubleArray();
		jfloatArray createFloatArray();
		jintArray createIntArray();
		jlongArray createLongArray();
		jarray createStringArray();
		java::util::ArrayList createStringArrayList();
		jobjectArray createTypedArray(JObject arg0);
		java::util::ArrayList createTypedArrayList(JObject arg0);
		android::util::ArrayMap createTypedArrayMap(JObject arg0);
		android::util::SparseArray createTypedSparseArray(JObject arg0);
		jint dataAvail();
		jint dataCapacity();
		jint dataPosition();
		jint dataSize();
		void enforceInterface(jstring arg0);
		jboolean hasFileDescriptors();
		jbyteArray marshall();
		jobjectArray readArray(java::lang::ClassLoader arg0);
		java::util::ArrayList readArrayList(java::lang::ClassLoader arg0);
		void readBinderArray(jarray arg0);
		void readBinderList(JObject arg0);
		jboolean readBoolean();
		void readBooleanArray(jbooleanArray arg0);
		android::os::Bundle readBundle();
		android::os::Bundle readBundle(java::lang::ClassLoader arg0);
		jbyte readByte();
		void readByteArray(jbyteArray arg0);
		void readCharArray(jcharArray arg0);
		jdouble readDouble();
		void readDoubleArray(jdoubleArray arg0);
		void readException();
		void readException(jint arg0, jstring arg1);
		android::os::ParcelFileDescriptor readFileDescriptor();
		jfloat readFloat();
		void readFloatArray(jfloatArray arg0);
		java::util::HashMap readHashMap(java::lang::ClassLoader arg0);
		jint readInt();
		void readIntArray(jintArray arg0);
		void readList(JObject arg0, java::lang::ClassLoader arg1);
		jlong readLong();
		void readLongArray(jlongArray arg0);
		void readMap(JObject arg0, java::lang::ClassLoader arg1);
		JObject readParcelable(java::lang::ClassLoader arg0);
		jarray readParcelableArray(java::lang::ClassLoader arg0);
		JObject readParcelableCreator(java::lang::ClassLoader arg0);
		JObject readParcelableList(JObject arg0, java::lang::ClassLoader arg1);
		android::os::PersistableBundle readPersistableBundle();
		android::os::PersistableBundle readPersistableBundle(java::lang::ClassLoader arg0);
		JObject readSerializable();
		android::util::Size readSize();
		android::util::SizeF readSizeF();
		android::util::SparseArray readSparseArray(java::lang::ClassLoader arg0);
		android::util::SparseBooleanArray readSparseBooleanArray();
		jstring readString();
		void readStringArray(jarray arg0);
		void readStringList(JObject arg0);
		JObject readStrongBinder();
		void readTypedArray(jobjectArray arg0, JObject arg1);
		void readTypedList(JObject arg0, JObject arg1);
		jobject readTypedObject(JObject arg0);
		jobject readValue(java::lang::ClassLoader arg0);
		void recycle();
		void setDataCapacity(jint arg0);
		void setDataPosition(jint arg0);
		void setDataSize(jint arg0);
		void unmarshall(jbyteArray arg0, jint arg1, jint arg2);
		void writeArray(jobjectArray arg0);
		void writeBinderArray(jarray arg0);
		void writeBinderList(JObject arg0);
		void writeBoolean(jboolean arg0);
		void writeBooleanArray(jbooleanArray arg0);
		void writeBundle(android::os::Bundle arg0);
		void writeByte(jbyte arg0);
		void writeByteArray(jbyteArray arg0);
		void writeByteArray(jbyteArray arg0, jint arg1, jint arg2);
		void writeCharArray(jcharArray arg0);
		void writeDouble(jdouble arg0);
		void writeDoubleArray(jdoubleArray arg0);
		void writeException(java::lang::Exception arg0);
		void writeFileDescriptor(java::io::FileDescriptor arg0);
		void writeFloat(jfloat arg0);
		void writeFloatArray(jfloatArray arg0);
		void writeInt(jint arg0);
		void writeIntArray(jintArray arg0);
		void writeInterfaceToken(jstring arg0);
		void writeList(JObject arg0);
		void writeLong(jlong arg0);
		void writeLongArray(jlongArray arg0);
		void writeMap(JObject arg0);
		void writeNoException();
		void writeParcelable(JObject arg0, jint arg1);
		void writeParcelableArray(jarray arg0, jint arg1);
		void writeParcelableCreator(JObject arg0);
		void writeParcelableList(JObject arg0, jint arg1);
		void writePersistableBundle(android::os::PersistableBundle arg0);
		void writeSerializable(JObject arg0);
		void writeSize(android::util::Size arg0);
		void writeSizeF(android::util::SizeF arg0);
		void writeSparseArray(android::util::SparseArray arg0);
		void writeSparseBooleanArray(android::util::SparseBooleanArray arg0);
		void writeString(jstring arg0);
		void writeStringArray(jarray arg0);
		void writeStringList(JObject arg0);
		void writeStrongBinder(JObject arg0);
		void writeStrongInterface(JObject arg0);
		void writeTypedArray(jarray arg0, jint arg1);
		void writeTypedArrayMap(android::util::ArrayMap arg0, jint arg1);
		void writeTypedList(JObject arg0);
		void writeTypedObject(JObject arg0, jint arg1);
		void writeTypedSparseArray(android::util::SparseArray arg0, jint arg1);
		void writeValue(jobject arg0);
	};
} // namespace android::os

