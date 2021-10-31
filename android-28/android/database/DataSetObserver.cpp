#include "./DataSetObserver.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	DataSetObserver::DataSetObserver(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DataSetObserver::DataSetObserver()
		: __JniBaseClass(
			"android.database.DataSetObserver",
			"()V"
		) {}
	
	// Methods
	void DataSetObserver::onChanged()
	{
		callMethod<void>(
			"onChanged",
			"()V"
		);
	}
	void DataSetObserver::onInvalidated()
	{
		callMethod<void>(
			"onInvalidated",
			"()V"
		);
	}
} // namespace android::database

