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

char *Str_copy(char *dest, const char *src) {
char *index; 
assert(src != NULL);
assert(dest != NULL);

index = dest; 
while (*src != '\0'){
  *dest = *src;
  dest++;
  src++;
}
*dest = '\0';   
return index;  
}

char* Str_concat (  char *destination,const char *source) {
 char* index;
  assert(destination != NULL);
    assert(source != NULL);

index = destination;
    while (*index != '\0'  ) {
    index++;
    }
while (*source != '\0') {
   *index++ = *source++;
}
*index = '\0';   
return destination; 
}

int Str_compare(const char *str1, const char * str2){
return 0; 
}

char* Str_search (const char *haystack, const char *needle) {

   return NULL;
}