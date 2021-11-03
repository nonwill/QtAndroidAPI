#include "../io/InputStream.hpp"
#include "./CacheResponse.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	CacheResponse::CacheResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CacheResponse::CacheResponse()
		: JObject(
			"java.net.CacheResponse",
			"()V"
		) {}
	
	// Methods
	java::io::InputStream CacheResponse::getBody()
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/InputStream;"
		);
	}
	JObject CacheResponse::getHeaders()
	{
		return callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::net

