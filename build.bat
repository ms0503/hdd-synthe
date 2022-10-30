@echo off
setlocal enabledelayedexpansion
cd /d %~dp0
@echo on
arduino-cli compile -b arduino:avr:uno ./hdd_synthe.ino --output-dir ./ --verbose --log-level trace
exit /b 0

