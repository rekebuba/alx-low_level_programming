#ifndef BIT_MANIPLATION
#define BIT_MANIPLATION

#include <stdio.h>
#include <string.h>

int _putchar(char c);

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

unsigned int _pow(int base, int exponent);

#endif
