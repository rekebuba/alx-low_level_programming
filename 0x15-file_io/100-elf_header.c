#include "main.h"

/**
 * print_error
 * 
 * @message: const char *message
 * Return: void
 */
void print_error(const char *message)
{
fprintf(stderr, "Error: %s\n", message);
exit(98);

}

/**
 * print_elf_header - print_elf_header
 * 
 * @header: const Elf64_Ehdr *header
 * Return: void
 */
void print_elf_header(const Elf64_Ehdr *header)
{
int i;
printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");

printf("Class: %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

printf("Data: %s endian\n", header->e_ident[EI_DATA] == 
ELFDATA2LSB ? "little" : "big");

printf("Version: %d\n", header->e_ident[EI_VERSION]);

printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);

printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

printf("Type: 0x%x\n", header->e_type);

printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int fd;
const char *filename;
Elf64_Ehdr header;
ssize_t num_bytes;

filename = argv[1];

fd = open(filename, O_RDONLY);
if (fd == -1)
{
print_error("Failed to open file");
}

num_bytes = read(fd, &header, sizeof(header));
if (num_bytes == -1)
{
print_error("Failed to read ELF header");
}
if (num_bytes != sizeof(header))
{
print_error("Incomplete ELF header read");
}

if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Not an ELF file");
}

print_elf_header(&header);

close(fd);

return (0);
}
