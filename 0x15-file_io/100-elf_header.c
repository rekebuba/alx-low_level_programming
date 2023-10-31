#include "main.h"


typedef struct 
{
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

int main(int argc, char *argv[]) 
{
    int fd;
    Elf64_Ehdr elfHeader;
    ssize_t bytesRead;
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Failed to open the ELF file.\n");
        exit(98);
    }

    bytesRead = read(fd, &elfHeader, sizeof(elfHeader));
    if (bytesRead != sizeof(elfHeader))
    {
        fprintf(stderr, "Error: Failed to read the ELF header.\n");
        close(fd);
        exit(98);
    }
    /* Check if the file is an ELF file */
    if (elfHeader.e_ident[0] != 0x7f || elfHeader.e_ident[1] != 'E' || elfHeader.e_ident[2] != 'L' || elfHeader.e_ident[3] != 'F') 
    {
        fprintf(stderr, "Error: %s is not an ELF file.\n", argv[1]);
        close(fd);
        exit(98);
    }

    printf("ELF Header Information:\n");
    printf("  Magic:   %02x %c %c %c\n", elfHeader.e_ident[0], elfHeader.e_ident[1], elfHeader.e_ident[2], elfHeader.e_ident[3]);
    printf("  Class:                             %s\n", elfHeader.e_ident[4] == 1 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", elfHeader.e_ident[5] == 1 ? "little-endian" : "big-endian");
    printf("  Version:                           %d (current)\n", elfHeader.e_ident[6]);
    printf("  OS/ABI:                            %d\n", elfHeader.e_ident[7]);
    printf("  ABI Version:                       %d\n", elfHeader.e_ident[8]);
    printf("  Type:                              0x%04x\n", elfHeader.e_type);
    printf("  Entry point address:               0x%llx\n", elfHeader.e_entry);

    close(fd);
    return 0;
}
