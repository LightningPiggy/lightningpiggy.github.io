#!/bin/sh

source="$1"
if [ -z "$source" ]; then
	echo "Usage: $0 sourcefolder"
	echo "Example: $0 /tmp/arduino_build_310919"
	exit 1
fi

target=firmware/ttgo_lilygo_266_build/
arduinoesp32tools=~/.arduino15/packages/esp32/hardware/esp32/1.0.6/tools

for file in "$source/LightningPiggy-Lilygo-266.ino.partitions.bin" "$source/LightningPiggy-Lilygo-266.ino.bin" "$arduinoesp32tools/partitions/boot_app0.bin" "$arduinoesp32tools/sdk/bin/bootloader_qio_80m.bin" ; do
	ls -al "$file"
	cp "$file" "$target"
done
ls -al "$target"

echo "Now don't forget the update the version number in the manifest!"
sleep 5
exit 0

