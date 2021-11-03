#include "./IkeSaProposal.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	IkeSaProposal::IkeSaProposal(QJniObject obj) : android::net::ipsec::ike::SaProposal(obj) {}
	
	// Constructors
	
	// Methods
	JObject IkeSaProposal::getSupportedEncryptionAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedEncryptionAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	JObject IkeSaProposal::getSupportedIntegrityAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedIntegrityAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	JObject IkeSaProposal::getSupportedPseudorandomFunctions()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedPseudorandomFunctions",
			"()Ljava/util/Set;"
		);
	}
	jboolean IkeSaProposal::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject IkeSaProposal::getPseudorandomFunctions()
	{
		return callObjectMethod(
			"getPseudorandomFunctions",
			"()Ljava/util/List;"
		);
	}
	jint IkeSaProposal::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

