/*
 * SPDX-FileCopyrightText: 2025 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

namespace aidl {
namespace vendor {
namespace lineage {
namespace touch {

constexpr const char* kHighTouchPollingRatePath =
    "/sys/devices/platform/soc/ac0000.qcom,qupv3_1_geni_se/a90000.spi/spi_master/spi0/spi0.0/synaptics_tcm_hbp.0/high_rate";

}  // namespace touch
}  // namespace lineage
}  // namespace vendor
}  // namespace aidl
