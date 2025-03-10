#pragma once
#include "crypto_def.h"

namespace crypto
{
	uint64_t xor64(uint64_t input, uint64_t key);

	int32_t sha256(context::s_context* context, uint8_t* buffer, uint32_t buffer_size, uint8_t** hash_buffer, uint32_t* hash_size);
	int32_t sha256(context::s_context* context, uint8_t* buffer, uint32_t buffer_size, crypto::s_hash* hash_out);
}
