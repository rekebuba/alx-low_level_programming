#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int calc, num1, operator, num2;
    if (argc != 4)
    {
        printf("ERROR\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    operator = argv[2];
    num2 = atoi(argv[3]);
    int (*calcJ)(int, int) = get_op_func(operator);
    printf("%d\n", calc);
    
}
