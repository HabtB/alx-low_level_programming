#!/bin/bash
wget -P /tmp https://github.com/HabtB/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libhabt.so
export LD_PRELOAD=/tmp/libhabt.so
