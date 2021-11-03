#pragma once

#include "../../../JObject.hpp"

class JArray;
class JObject;
class JString;

namespace android::media::tv
{
	class TvContentRating : public JObject
	{
	public:
		// Fields
		static android::media::tv::TvContentRating UNRATED();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvContentRating(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContentRating(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::tv::TvContentRating createRating(JString arg0, JString arg1, JString arg2, JArray arg3);
		static android::media::tv::TvContentRating unflattenFromString(JString arg0);
		jboolean contains(android::media::tv::TvContentRating arg0);
		jboolean equals(JObject arg0);
		JString flattenToString();
		JString getDomain();
		JString getMainRating();
		JString getRatingSystem();
		JObject getSubRatings();
		jint hashCode();
	};
} // namespace android::media::tv

