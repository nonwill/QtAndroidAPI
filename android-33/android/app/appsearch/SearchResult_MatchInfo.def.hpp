#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SearchResult_MatchRange;
}
class JString;
class JString;

namespace android::app::appsearch
{
	class SearchResult_MatchInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getExactMatch() const;
		android::app::appsearch::SearchResult_MatchRange getExactMatchRange() const;
		JString getFullText() const;
		JString getPropertyPath() const;
		JString getSnippet() const;
		android::app::appsearch::SearchResult_MatchRange getSnippetRange() const;
		JString getSubmatch() const;
		android::app::appsearch::SearchResult_MatchRange getSubmatchRange() const;
	};
} // namespace android::app::appsearch

