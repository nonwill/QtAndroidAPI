#pragma once

#include "./spi/AbstractSelectableChannel.def.hpp"

namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels
{
	class Pipe_SinkChannel : public java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Pipe_SinkChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractSelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		Pipe_SinkChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
		
		// Constructors
		
		// Methods
		jint validOps() const;
	};
} // namespace java::nio::channels

