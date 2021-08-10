docker run --rm -it -v "%cd%":/root/env yanos-buildenv
make build-yanos
exit
qemu-system-x86_64 -cdrom dist\x86_64\yanos.iso