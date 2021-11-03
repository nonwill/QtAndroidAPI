#include "./AbstractSelectionKey.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractSelectionKey::AbstractSelectionKey(QAndroidJniObject obj) : java::nio::channels::SelectionKey(obj) {}
	
	// Constructors
	
	// Methods
	void AbstractSelectionKey::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean AbstractSelectionKey::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

