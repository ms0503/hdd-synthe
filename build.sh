#!/bin/sh
arduino-cli compile -b arduino:avr:uno ./hdd_synthe.ino --output-dir ./ --verbose --log-level trace
python ./utils/uf2/utils/uf2conv.py -c -b 0x4000 -o ./hdd_synthe.ino.uf2 ./hdd_synthe.ino.bin
exit 0

