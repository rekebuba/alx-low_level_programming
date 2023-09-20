#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
* Return: 0
* @a: is pointer
* @n: integer
*/

void reverse_array(int *a, int n)
{
int i;
int t;

for (i = 0; i < n--; i++)
{
t = a[i];
//This line assigns the value at index i of the array a to the variable t. It temporarily stores the value for swapping.
a[i] = a[n];
// This line assigns the value at index n of the array a to the element at index i. It swaps the value at index i with the value at index n.
a[n] = t;
//This line assigns the value stored in the variable t to the element at index n of the array a. It completes the swap by assigning the original value of a[i] to a[n]
/**Note: The n-- in the loop condition is a post-decrement operation, which means that n is decremented after each iteration of the loop. 
 *This ensures that the loop iterates from the first element to the middle element of the array, effectively reversing the array.
 */
}
}
