#!/bin/sh
arduino-cli upload -b arduino:avr:uno -p /dev/ttyTarget -i ./hdd_synthe.ino.bin --verbose --log-level trace
exit 0

