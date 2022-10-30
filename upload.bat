@echo off
setlocal enabledelayedexpansion
cd /d %~dp0
@echo on
arduino-cli upload -b arduino:avr:uno -p COM10 -i ./hdd_synthe.ino.bin --verbose --log-level trace
exit /b 0

