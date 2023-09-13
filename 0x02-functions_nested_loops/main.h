int _putchar(char c);
void print_alphabet_x10(void)
{
char a = 'a';
while (a <= 'z')
{
a++;
}
}
void print_alphabet(void)
{
    char a = 'a';
while (a <= 'z')
{
a++;
}
}
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n)
{
    for(int i = 0; i <= 98; i++)
    {
        _putchar(n + i);
        if(i != 98)
        {
            _putchar(',');
            _putchar(' ');
        }
    }
}