#ifndef KERNEL_UTILITY_H
#define KERNEL_UTILITY_H

#include <stdint.h>

static inline uint8_t in_byte(uint16_t _port)
{
      uint8_t rv;
    __asm__ __volatile__ ("inb %1, %0"
                          : "=a" (rv)
                          : "d" (_port));
    return (rv);
}

static inline void out_byte(uint16_t _port, uint8_t _data)
{
   __asm__ __volatile__ ("outb %1, %0"
                          :
                          : "d" (_port),
                          "a" (_data));
}

#endif /* KERNEL_UTILITY_H */