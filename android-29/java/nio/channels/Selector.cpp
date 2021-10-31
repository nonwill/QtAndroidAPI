#include "./SelectionKey.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./Selector.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	Selector::Selector(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::Selector Selector::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Selector",
			"open",
			"()Ljava/nio/channels/Selector;"
		);
	}
	void Selector::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean Selector::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	__JniBaseClass Selector::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Set;"
		);
	}
	java::nio::channels::spi::SelectorProvider Selector::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	jint Selector::select()
	{
		return callMethod<jint>(
			"select",
			"()I"
		);
	}
	jint Selector::select(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;)I",
			arg0.object()
		);
	}
	jint Selector::select(jlong arg0)
	{
		return callMethod<jint>(
			"select",
			"(J)I",
			arg0
		);
	}
	jint Selector::select(__JniBaseClass arg0, jlong arg1)
	{
		return callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;J)I",
			arg0.object(),
			arg1
		);
	}
	jint Selector::selectNow()
	{
		return callMethod<jint>(
			"selectNow",
			"()I"
		);
	}
	jint Selector::selectNow(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"selectNow",
			"(Ljava/util/function/Consumer;)I",
			arg0.object()
		);
	}
	__JniBaseClass Selector::selectedKeys()
	{
		return callObjectMethod(
			"selectedKeys",
			"()Ljava/util/Set;"
		);
	}
	java::nio::channels::Selector Selector::wakeup()
	{
		return callObjectMethod(
			"wakeup",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

