/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

static const variant_info_t xaga_global_info = {
    .hwc_value = "GL",
    .sku_value = "xaga",

    .brand = "POCO",
    .device = "xaga",
    .marketname = "POCO X4 GT",
    .model = "22041216G",
    .build_fingerprint = "POCO/xaga_global/xaga:12/SP1A.210812.016/V14.0.5.0.TLOMIXM:user/release-keys"
};

static const variant_info_t xagapro_global_info = {
    .hwc_value = "GL",
    .sku_value = "xagapro",

    .brand = "POCO",
    .device = "xagapro",
    .marketname = "POCO X4 GT Pro",
    .model = "22041216UG",
    .build_fingerprint = "POCO/xagapro_global/xagapro:12/SP1A.210812.016/V14.0.5.0.TLOMIXM:user/release-keys"
};

static const variant_info_t xaga_info = {
    .hwc_value = "CN",
    .sku_value = "xaga",

    .brand = "Redmi",
    .device = "xaga",
    .marketname = "Redmi Note 11T Pro",
    .model = "22041216C",
    .build_fingerprint = "Redmi/xaga/xaga:12/SP1A.210812.016/V14.0.5.0.TLOCNXM:user/release-keys"
};

static const variant_info_t xagapro_info = {
    .hwc_value = "CN",
    .sku_value = "xagapro",

    .brand = "Redmi",
    .device = "xagapro",
    .marketname = "Redmi Note 11T Pro+",
    .model = "22041216UC",
    .build_fingerprint = "Redmi/xagapro/xagapro:12/SP1A.210812.016/V14.0.5.0.TLOCNXM:user/release-keys"
};

static const variant_info_t xagain_info = {
    .hwc_value = "IN",
    .sku_value = "xagain",

    .brand = "Redmi",
    .device = "xagain",
    .marketname = "Redmi K50i",
    .model = "22041216I",
    .build_fingerprint = "Redmi/xagain/xagain:12/SP1A.210812.016/V14.0.4.0.TLOINXM:user/release-keys"
};

static const variant_info_t xagaproin_info = {
    .hwc_value = "IN",
    .sku_value = "xagaproin",

    .brand = "Redmi",
    .device = "xagaproin",
    .marketname = "Redmi K50i Pro",
    .model = "22041216UI",
    .build_fingerprint = "Redmi/xagaproin/xagaproin:12/SP1A.210812.016/V14.0.4.0.TLOINXM:user/release-keys"
};

static const std::vector<variant_info_t> variants = {
    xaga_global_info,
    xagapro_global_info,
    xaga_info,
    xagapro_info,
    xagain_info,
    xagaproin_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
