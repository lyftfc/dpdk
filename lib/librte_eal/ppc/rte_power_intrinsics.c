/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2021 Intel Corporation
 */

#include "rte_power_intrinsics.h"

/**
 * This function is not supported on PPC64.
 */
int
rte_power_monitor(const volatile void *p, const uint64_t expected_value,
		const uint64_t value_mask, const uint64_t tsc_timestamp,
		const uint8_t data_sz)
{
	RTE_SET_USED(p);
	RTE_SET_USED(expected_value);
	RTE_SET_USED(value_mask);
	RTE_SET_USED(tsc_timestamp);
	RTE_SET_USED(data_sz);

	return -ENOTSUP;
}

/**
 * This function is not supported on PPC64.
 */
int
rte_power_monitor_sync(const volatile void *p, const uint64_t expected_value,
		const uint64_t value_mask, const uint64_t tsc_timestamp,
		const uint8_t data_sz, rte_spinlock_t *lck)
{
	RTE_SET_USED(p);
	RTE_SET_USED(expected_value);
	RTE_SET_USED(value_mask);
	RTE_SET_USED(tsc_timestamp);
	RTE_SET_USED(lck);
	RTE_SET_USED(data_sz);

	return -ENOTSUP;
}

/**
 * This function is not supported on PPC64.
 */
int
rte_power_pause(const uint64_t tsc_timestamp)
{
	RTE_SET_USED(tsc_timestamp);

	return -ENOTSUP;
}
