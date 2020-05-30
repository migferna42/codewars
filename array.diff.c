#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) 
{
  int *arr3;
  int mask[n1];
  size_t it1 = 0, it2 = 0, it3 = 0;
  *z = 0;
  while (it1 < n1)
  {
    mask[it1++] = 0;
  }
  while (it2 < n2)
  {
    it1 = 0;
    while (it1 < n1)
    {
      if (arr1[it1] == arr2[it2])
        mask[it1] = 1;
      it1++;
    }
    it2++;
  }
  if (!(arr3 = malloc(sizeof(arr3) * (n1))))
    return (0);
  it1 = 0;
  while (it1 < n1)
  {
    if (mask[it1] == 0)
    {
      (*z)++;
      arr3[it3++] = arr1[it1];
    }
    it1++;
  }
  return (arr3);
}