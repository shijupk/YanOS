#include <stdarg.h>
#include <multiboot.h>
#include <kernel.h>
#include <vesa.h>
#include <serial.h>
#include <logger.h>
#include <print.h>




void yano_main(unsigned long magic __UNUSED__, multiboot_info_t* mbi_phys)
{
    serial_init();
    init_kernel_vesa(TO_VMA_PTR(multiboot_info_t *, mbi_phys));

    print_clear();
    print_set_color(PRINT_COLOR_CYAN, PRINT_COLOR_BLACK);
    print_str("\n--------------------  Yanos x64!!! ------------------------\n");
    print_str("\n-------------------- Nothing so far ------------------------\n");
}