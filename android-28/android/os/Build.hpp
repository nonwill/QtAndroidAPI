#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class Build : public JObject
	{
	public:
		// Fields
		static jstring BOARD();
		static jstring BOOTLOADER();
		static jstring BRAND();
		static jstring CPU_ABI();
		static jstring CPU_ABI2();
		static jstring DEVICE();
		static jstring DISPLAY();
		static jstring FINGERPRINT();
		static jstring HARDWARE();
		static jstring HOST();
		static jstring ID();
		static jstring MANUFACTURER();
		static jstring MODEL();
		static jstring PRODUCT();
		static jstring RADIO();
		static jstring SERIAL();
		static jarray SUPPORTED_32_BIT_ABIS();
		static jarray SUPPORTED_64_BIT_ABIS();
		static jarray SUPPORTED_ABIS();
		static jstring TAGS();
		static jlong TIME();
		static jstring TYPE();
		static jstring UNKNOWN();
		static jstring USER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Build(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Build(QJniObject obj);
		
		// Constructors
		Build();
		
		// Methods
		static jstring getRadioVersion();
		static jstring getSerial();
	};
} // namespace android::os

