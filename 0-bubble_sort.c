#include "sort.h"
/**
 * bubble_sort - sorts bubbly
 * @array: array to sort
 * @size: size
 *
 */
void bubble_sort(int *array, size_t size)
{
size_t k, newer = size;
int tmp, swap;

if (array == NULL || size < 2)
return;

while (newer)
{
swap = 0;
for (k = 0; k < newer - 1; k++)
{
if (array[k] > array[k + 1])
{
tmp = array[k + 1];
array[k + 1] = array[k];
array[k] = tmp;
print_array(array, size);
swap = 1;
}
}
newer--;
if (!swap)
break;
}
}
