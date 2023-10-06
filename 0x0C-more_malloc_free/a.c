#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int multiply(int num1, int num2) {
    return num1 * num2;
}

int isPositiveNumber(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!isPositiveNumber(argv[1]) || !isPositiveNumber(argv[2])) {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}
