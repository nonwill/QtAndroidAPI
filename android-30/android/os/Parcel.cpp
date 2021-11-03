#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JDoubleArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./Bundle.hpp"
#include "./ParcelFileDescriptor.hpp"
#include "./PersistableBundle.hpp"
#include "../util/ArrayMap.hpp"
#include "../util/Size.hpp"
#include "../util/SizeF.hpp"
#include "../util/SparseArray.hpp"
#include "../util/SparseBooleanArray.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../../java/util/HashMap.hpp"
#include "./Parcel.hpp"

namespace android::os
{
	// Fields
	JObject Parcel::STRING_CREATOR()
	{
		return getStaticObjectField(
			"android.os.Parcel",
			"STRING_CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Parcel::Parcel(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::Parcel Parcel::obtain()
	{
		return callStaticObjectMethod(
			"android.os.Parcel",
			"obtain",
			"()Landroid/os/Parcel;"
		);
	}
	void Parcel::appendFrom(android::os::Parcel arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"appendFrom",
			"(Landroid/os/Parcel;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JArray Parcel::createBinderArray()
	{
		return callObjectMethod(
			"createBinderArray",
			"()[Landroid/os/IBinder;"
		);
	}
	java::util::ArrayList Parcel::createBinderArrayList()
	{
		return callObjectMethod(
			"createBinderArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	JBooleanArray Parcel::createBooleanArray()
	{
		return callObjectMethod(
			"createBooleanArray",
			"()[Z"
		);
	}
	JByteArray Parcel::createByteArray()
	{
		return callObjectMethod(
			"createByteArray",
			"()[B"
		);
	}
	JCharArray Parcel::createCharArray()
	{
		return callObjectMethod(
			"createCharArray",
			"()[C"
		);
	}
	JDoubleArray Parcel::createDoubleArray()
	{
		return callObjectMethod(
			"createDoubleArray",
			"()[D"
		);
	}
	JFloatArray Parcel::createFloatArray()
	{
		return callObjectMethod(
			"createFloatArray",
			"()[F"
		);
	}
	JIntArray Parcel::createIntArray()
	{
		return callObjectMethod(
			"createIntArray",
			"()[I"
		);
	}
	JLongArray Parcel::createLongArray()
	{
		return callObjectMethod(
			"createLongArray",
			"()[J"
		);
	}
	JArray Parcel::createStringArray()
	{
		return callObjectMethod(
			"createStringArray",
			"()[Ljava/lang/String;"
		);
	}
	java::util::ArrayList Parcel::createStringArrayList()
	{
		return callObjectMethod(
			"createStringArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	JObjectArray Parcel::createTypedArray(JObject arg0)
	{
		return callObjectMethod(
			"createTypedArray",
			"(Landroid/os/Parcelable$Creator;)[Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::util::ArrayList Parcel::createTypedArrayList(JObject arg0)
	{
		return callObjectMethod(
			"createTypedArrayList",
			"(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	android::util::ArrayMap Parcel::createTypedArrayMap(JObject arg0)
	{
		return callObjectMethod(
			"createTypedArrayMap",
			"(Landroid/os/Parcelable$Creator;)Landroid/util/ArrayMap;",
			arg0.object()
		);
	}
	android::util::SparseArray Parcel::createTypedSparseArray(JObject arg0)
	{
		return callObjectMethod(
			"createTypedSparseArray",
			"(Landroid/os/Parcelable$Creator;)Landroid/util/SparseArray;",
			arg0.object()
		);
	}
	jint Parcel::dataAvail()
	{
		return callMethod<jint>(
			"dataAvail",
			"()I"
		);
	}
	jint Parcel::dataCapacity()
	{
		return callMethod<jint>(
			"dataCapacity",
			"()I"
		);
	}
	jint Parcel::dataPosition()
	{
		return callMethod<jint>(
			"dataPosition",
			"()I"
		);
	}
	jint Parcel::dataSize()
	{
		return callMethod<jint>(
			"dataSize",
			"()I"
		);
	}
	void Parcel::enforceInterface(JString arg0)
	{
		callMethod<void>(
			"enforceInterface",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean Parcel::hasFileDescriptors()
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	JByteArray Parcel::marshall()
	{
		return callObjectMethod(
			"marshall",
			"()[B"
		);
	}
	JObjectArray Parcel::readArray(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readArray",
			"(Ljava/lang/ClassLoader;)[Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::util::ArrayList Parcel::readArrayList(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readArrayList",
			"(Ljava/lang/ClassLoader;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	void Parcel::readBinderArray(JArray arg0)
	{
		callMethod<void>(
			"readBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0.object<jarray>()
		);
	}
	void Parcel::readBinderList(JObject arg0)
	{
		callMethod<void>(
			"readBinderList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	jboolean Parcel::readBoolean()
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	void Parcel::readBooleanArray(JBooleanArray arg0)
	{
		callMethod<void>(
			"readBooleanArray",
			"([Z)V",
			arg0.object<jbooleanArray>()
		);
	}
	android::os::Bundle Parcel::readBundle()
	{
		return callObjectMethod(
			"readBundle",
			"()Landroid/os/Bundle;"
		);
	}
	android::os::Bundle Parcel::readBundle(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	jbyte Parcel::readByte()
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	void Parcel::readByteArray(JByteArray arg0)
	{
		callMethod<void>(
			"readByteArray",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Parcel::readCharArray(JCharArray arg0)
	{
		callMethod<void>(
			"readCharArray",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	jdouble Parcel::readDouble()
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	void Parcel::readDoubleArray(JDoubleArray arg0)
	{
		callMethod<void>(
			"readDoubleArray",
			"([D)V",
			arg0.object<jdoubleArray>()
		);
	}
	void Parcel::readException()
	{
		callMethod<void>(
			"readException",
			"()V"
		);
	}
	void Parcel::readException(jint arg0, JString arg1)
	{
		callMethod<void>(
			"readException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	android::os::ParcelFileDescriptor Parcel::readFileDescriptor()
	{
		return callObjectMethod(
			"readFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jfloat Parcel::readFloat()
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void Parcel::readFloatArray(JFloatArray arg0)
	{
		callMethod<void>(
			"readFloatArray",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	java::util::HashMap Parcel::readHashMap(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readHashMap",
			"(Ljava/lang/ClassLoader;)Ljava/util/HashMap;",
			arg0.object()
		);
	}
	jint Parcel::readInt()
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	void Parcel::readIntArray(JIntArray arg0)
	{
		callMethod<void>(
			"readIntArray",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void Parcel::readList(JObject arg0, java::lang::ClassLoader arg1)
	{
		callMethod<void>(
			"readList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jlong Parcel::readLong()
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	void Parcel::readLongArray(JLongArray arg0)
	{
		callMethod<void>(
			"readLongArray",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	void Parcel::readMap(JObject arg0, java::lang::ClassLoader arg1)
	{
		callMethod<void>(
			"readMap",
			"(Ljava/util/Map;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Parcel::readParcelable(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readParcelable",
			"(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;",
			arg0.object()
		);
	}
	JArray Parcel::readParcelableArray(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readParcelableArray",
			"(Ljava/lang/ClassLoader;)[Landroid/os/Parcelable;",
			arg0.object()
		);
	}
	JObject Parcel::readParcelableCreator(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readParcelableCreator",
			"(Ljava/lang/ClassLoader;)Landroid/os/Parcelable$Creator;",
			arg0.object()
		);
	}
	JObject Parcel::readParcelableList(JObject arg0, java::lang::ClassLoader arg1)
	{
		return callObjectMethod(
			"readParcelableList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::PersistableBundle Parcel::readPersistableBundle()
	{
		return callObjectMethod(
			"readPersistableBundle",
			"()Landroid/os/PersistableBundle;"
		);
	}
	android::os::PersistableBundle Parcel::readPersistableBundle(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readPersistableBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/PersistableBundle;",
			arg0.object()
		);
	}
	JObject Parcel::readSerializable()
	{
		return callObjectMethod(
			"readSerializable",
			"()Ljava/io/Serializable;"
		);
	}
	android::util::Size Parcel::readSize()
	{
		return callObjectMethod(
			"readSize",
			"()Landroid/util/Size;"
		);
	}
	android::util::SizeF Parcel::readSizeF()
	{
		return callObjectMethod(
			"readSizeF",
			"()Landroid/util/SizeF;"
		);
	}
	android::util::SparseArray Parcel::readSparseArray(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readSparseArray",
			"(Ljava/lang/ClassLoader;)Landroid/util/SparseArray;",
			arg0.object()
		);
	}
	android::util::SparseBooleanArray Parcel::readSparseBooleanArray()
	{
		return callObjectMethod(
			"readSparseBooleanArray",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	JString Parcel::readString()
	{
		return callObjectMethod(
			"readString",
			"()Ljava/lang/String;"
		);
	}
	void Parcel::readStringArray(JArray arg0)
	{
		callMethod<void>(
			"readStringArray",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void Parcel::readStringList(JObject arg0)
	{
		callMethod<void>(
			"readStringList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	JObject Parcel::readStrongBinder()
	{
		return callObjectMethod(
			"readStrongBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void Parcel::readTypedArray(JObjectArray arg0, JObject arg1)
	{
		callMethod<void>(
			"readTypedArray",
			"([Ljava/lang/Object;Landroid/os/Parcelable$Creator;)V",
			arg0.object<jobjectArray>(),
			arg1.object()
		);
	}
	void Parcel::readTypedList(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"readTypedList",
			"(Ljava/util/List;Landroid/os/Parcelable$Creator;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Parcel::readTypedObject(JObject arg0)
	{
		return callObjectMethod(
			"readTypedObject",
			"(Landroid/os/Parcelable$Creator;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject Parcel::readValue(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readValue",
			"(Ljava/lang/ClassLoader;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	void Parcel::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void Parcel::setDataCapacity(jint arg0)
	{
		callMethod<void>(
			"setDataCapacity",
			"(I)V",
			arg0
		);
	}
	void Parcel::setDataPosition(jint arg0)
	{
		callMethod<void>(
			"setDataPosition",
			"(I)V",
			arg0
		);
	}
	void Parcel::setDataSize(jint arg0)
	{
		callMethod<void>(
			"setDataSize",
			"(I)V",
			arg0
		);
	}
	void Parcel::unmarshall(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"unmarshall",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Parcel::writeArray(JObjectArray arg0)
	{
		callMethod<void>(
			"writeArray",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	void Parcel::writeBinderArray(JArray arg0)
	{
		callMethod<void>(
			"writeBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0.object<jarray>()
		);
	}
	void Parcel::writeBinderList(JObject arg0)
	{
		callMethod<void>(
			"writeBinderList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeBoolean(jboolean arg0)
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void Parcel::writeBooleanArray(JBooleanArray arg0)
	{
		callMethod<void>(
			"writeBooleanArray",
			"([Z)V",
			arg0.object<jbooleanArray>()
		);
	}
	void Parcel::writeBundle(android::os::Bundle arg0)
	{
		callMethod<void>(
			"writeBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Parcel::writeByte(jbyte arg0)
	{
		callMethod<void>(
			"writeByte",
			"(B)V",
			arg0
		);
	}
	void Parcel::writeByteArray(JByteArray arg0)
	{
		callMethod<void>(
			"writeByteArray",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Parcel::writeByteArray(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"writeByteArray",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Parcel::writeCharArray(JCharArray arg0)
	{
		callMethod<void>(
			"writeCharArray",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	void Parcel::writeDouble(jdouble arg0)
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void Parcel::writeDoubleArray(JDoubleArray arg0)
	{
		callMethod<void>(
			"writeDoubleArray",
			"([D)V",
			arg0.object<jdoubleArray>()
		);
	}
	void Parcel::writeException(java::lang::Exception arg0)
	{
		callMethod<void>(
			"writeException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		);
	}
	void Parcel::writeFileDescriptor(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"writeFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void Parcel::writeFloat(jfloat arg0)
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void Parcel::writeFloatArray(JFloatArray arg0)
	{
		callMethod<void>(
			"writeFloatArray",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void Parcel::writeInt(jint arg0)
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void Parcel::writeIntArray(JIntArray arg0)
	{
		callMethod<void>(
			"writeIntArray",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void Parcel::writeInterfaceToken(JString arg0)
	{
		callMethod<void>(
			"writeInterfaceToken",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Parcel::writeList(JObject arg0)
	{
		callMethod<void>(
			"writeList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeLong(jlong arg0)
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void Parcel::writeLongArray(JLongArray arg0)
	{
		callMethod<void>(
			"writeLongArray",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	void Parcel::writeMap(JObject arg0)
	{
		callMethod<void>(
			"writeMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void Parcel::writeNoException()
	{
		callMethod<void>(
			"writeNoException",
			"()V"
		);
	}
	void Parcel::writeParcelable(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"writeParcelable",
			"(Landroid/os/Parcelable;I)V",
			arg0.object(),
			arg1
		);
	}
	void Parcel::writeParcelableArray(JArray arg0, jint arg1)
	{
		callMethod<void>(
			"writeParcelableArray",
			"([Landroid/os/Parcelable;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	void Parcel::writeParcelableCreator(JObject arg0)
	{
		callMethod<void>(
			"writeParcelableCreator",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void Parcel::writeParcelableList(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"writeParcelableList",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		);
	}
	void Parcel::writePersistableBundle(android::os::PersistableBundle arg0)
	{
		callMethod<void>(
			"writePersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
	void Parcel::writeSerializable(JObject arg0)
	{
		callMethod<void>(
			"writeSerializable",
			"(Ljava/io/Serializable;)V",
			arg0.object()
		);
	}
	void Parcel::writeSize(android::util::Size arg0)
	{
		callMethod<void>(
			"writeSize",
			"(Landroid/util/Size;)V",
			arg0.object()
		);
	}
	void Parcel::writeSizeF(android::util::SizeF arg0)
	{
		callMethod<void>(
			"writeSizeF",
			"(Landroid/util/SizeF;)V",
			arg0.object()
		);
	}
	void Parcel::writeSparseArray(android::util::SparseArray arg0)
	{
		callMethod<void>(
			"writeSparseArray",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void Parcel::writeSparseBooleanArray(android::util::SparseBooleanArray arg0)
	{
		callMethod<void>(
			"writeSparseBooleanArray",
			"(Landroid/util/SparseBooleanArray;)V",
			arg0.object()
		);
	}
	void Parcel::writeString(JString arg0)
	{
		callMethod<void>(
			"writeString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Parcel::writeStringArray(JArray arg0)
	{
		callMethod<void>(
			"writeStringArray",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void Parcel::writeStringList(JObject arg0)
	{
		callMethod<void>(
			"writeStringList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeStrongBinder(JObject arg0)
	{
		callMethod<void>(
			"writeStrongBinder",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	void Parcel::writeStrongInterface(JObject arg0)
	{
		callMethod<void>(
			"writeStrongInterface",
			"(Landroid/os/IInterface;)V",
			arg0.object()
		);
	}
	void Parcel::writeTypedArray(JArray arg0, jint arg1)
	{
		callMethod<void>(
			"writeTypedArray",
			"([Landroid/os/Parcelable;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	void Parcel::writeTypedArrayMap(android::util::ArrayMap arg0, jint arg1)
	{
		callMethod<void>(
			"writeTypedArrayMap",
			"(Landroid/util/ArrayMap;I)V",
			arg0.object(),
			arg1
		);
	}
	void Parcel::writeTypedList(JObject arg0)
	{
		callMethod<void>(
			"writeTypedList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeTypedObject(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"writeTypedObject",
			"(Landroid/os/Parcelable;I)V",
			arg0.object(),
			arg1
		);
	}
	void Parcel::writeTypedSparseArray(android::util::SparseArray arg0, jint arg1)
	{
		callMethod<void>(
			"writeTypedSparseArray",
			"(Landroid/util/SparseArray;I)V",
			arg0.object(),
			arg1
		);
	}
	void Parcel::writeValue(JObject arg0)
	{
		callMethod<void>(
			"writeValue",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::os

