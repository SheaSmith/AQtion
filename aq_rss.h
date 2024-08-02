/* SPDX-License-Identifier: GPL-2.0-only */
/* Atlantic Network Driver
 *
 * Copyright (C) 2014-2019 aQuantia Corporation
 * Copyright (C) 2019-2020 Marvell International Ltd.
 */

/* File aq_rss.h: Receive Side Scaling definitions. */

#ifndef AQ_RSS_H
#define AQ_RSS_H

#include "aq_common.h"
#include "aq_cfg.h"

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t  u8;
typedef int64_t s64;
typedef int32_t s32;
typedef int16_t s16;
typedef int8_t  s8;
typedef uint16_t __le16;
typedef uint32_t __le32;
typedef uint64_t __le64;
typedef uint16_t __be16;
typedef uint32_t __be32;
typedef uint64_t __be64;

struct aq_rss_parameters {
	u16 base_cpu_number;
	u16 indirection_table_size;
	u16 hash_secret_key_size;
	u32 hash_secret_key[AQ_CFG_RSS_HASHKEY_SIZE / sizeof(u32)];
	u8 indirection_table[AQ_CFG_RSS_INDIRECTION_TABLE_MAX];
};

#endif /* AQ_RSS_H */
