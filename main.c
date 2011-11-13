#include <stdio.h>
#include "vga.h"

struct multiboot;

int main(struct multiboot *mboot_ptr)
{
	vga_clear();

	vga_puts("­A problem has been detected and Windows has been shut down to prevent damage to your computer.\n\n");
	vga_puts("The problem seems to be caused by the following file: Windows.cfg\n\n");
	vga_puts("WINDOWS_IS_OBSOLETE_ERROR\n\nMicrosoft has abandoned the Windows project to create an open-source alternative on the Linux Kernel.\n\n");
	vga_puts("If this is the first time you've seen this Stop error screen,\n");
	vga_puts("restart your computer. If this screen appears again, follow\n");
	vga_puts("these steps:\n\n");
	vga_puts("Check to make sure any new hardware or software is properly installed.\n");
	vga_puts("If this is a new installation, ask your hardware or software manufacturer\n");
	vga_puts("for any Windows updates you might need\n\n");
	vga_puts("If the problems continue, disable or remove any newly installed hardware\n");
	vga_puts("or software. Disable BIOS memory options such as caching or shadowing.\n");
	vga_puts("If you need to use Safe Mode to remove or disable components, restart\n");
	vga_puts("your computer, press F8 to select Advanced Startup Options, and then\n");
	vga_puts("select \"Safe Mode\".\n\n");
	vga_puts("Technical information:\n\n");
	vga_puts("** STOP : 0xCAFEDEAD (0xCAFEBABE, 0xCAFED00D, 0xBADDECAF, 0xG0C0FFEE)");

	if (!strcmp(vga_gets(), "exit")) vga_exit();

	return EXIT_SUCCESS;
}