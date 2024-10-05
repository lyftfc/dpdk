#!/bin/sh

# DPDK to be built with
#   meson --prefix `pwd`/localinst build
#   cd build; meson install
# in the DPDK_ROOT directory
DPDK_ROOT=`pwd`/../..

PKG_CONFIG_PATH=$DPDK_ROOT/localinst/lib/x86_64-linux-gnu/pkgconfig make RTE_SDK=$DPDK_ROOT RTE_TARGET=build

# Execute with
# sudo LD_LIBRARY_PATH=$DPDK_ROOT/localinst/lib/x86_64-linux-gnu build/qdma_testapp-shared -a <QDMA_PCIE_BDF>

