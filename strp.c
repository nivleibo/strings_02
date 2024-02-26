#include "str.h" 
#include <assert.h>


size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

char *Str_copy(char *dest, const char *src[]) {


}

char* Str_concat (  char destination[],const char source[]);

int Str_compare(const char str1[], const char str2[]);

char* Str_search (const char haystack[], const char needle[]);