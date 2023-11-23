#include <main.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned int binary_to_uint(const char *b)
{
    int len = strlen(b);
    int i;
    if (b == NULL)
    {
        return (0);
    }
    for (i = 0; i < len; i++)
    {
        if (b[i] != '0' || b[i] != '1')
            return (0);
    }
    int index = 0;
    int j;
    unsigned int result = 0;
    for (j = len; j > 0; j--)
    {
        if (b[j] == '0')
        {
            index++;
        }
        else if (b[j] == '1')
        {
            result += pow(2, index);
            index++;
        }
    }
    return (result);
}