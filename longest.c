#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longest(char* s1, char* s2) {
  char *out;
  char *str = "abcdefghijklmnopqrstuvwxyz";
  int it = 0;
  int lens1 = strlen(s1);
  int lens2 = strlen(s2);
  
  if (!(out = malloc(sizeof(out) * (lens1 + lens2) + 1)))
    return (NULL);
  while (*str)
  {
    if (strchr(s1, *str) || strchr(s2, *str))
      out[it++] = *str;
    str++;
  }
  out[it] = '\0';
  return (out);
}
