
#ifndef STR_MODULE
#define STR_MODULE

#include <stddef.h>

size_t Str_getLength(const char *pcSrc);

char *Str_copy(char *dest, const char *src);

char* Str_concat (  char *destination,const char *source);

int Str_compare(const char *str1, const char * str2);

char* Str_search (const char *haystack, const char *needle);

#endif
