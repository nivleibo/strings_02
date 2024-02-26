/* stra.c (version 1)*/
/* author: Niv Leibowitz */


#include "str.h" 
#include <assert.h>


size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0'){
      uLength++;
   
   }
   return uLength;
}


char* Str_copy ( char dest[], const char src[])
{
    size_t uLength = 0;  
    assert(src != NULL);
    assert(dest != NULL);
    while (src[uLength] != '\0') {
        dest[uLength] = src[uLength];
        uLength++;
    }
   dest[uLength] = '\0'; 
    return dest;
}


char* Str_concat (  char destination[],const char source[])
 {
    size_t uLength = 0;
    size_t destinationLength = Str_getLength(destination);
    size_t sourceLength = Str_getLength(source);
    assert(destination != NULL);
    assert(source != NULL);
  
    while (uLength != sourceLength) {      
        destination[uLength + destinationLength] = source[uLength];
        uLength++;
    }
       destination[uLength + destinationLength] = '\0'; 
    return destination;
}


int Str_compare(const char str1[], const char str2[]){
    int uLength = 0; 
    assert(str1 != NULL);
    assert(str2 != NULL);

    while ( str1[uLength] !='\0' || str2[uLength] !='\0' ) {
        if (str1[uLength] == str2[uLength]) { 
            uLength++;
        }

        else if(str1[uLength] < str2[uLength]) {
            return -1;
        }
        else if (str1[uLength] > str2[uLength]) {
            return 1;   
        }
   
    }
 return 0; 
}
 
char* Str_search (const char haystack[], const char needle[]) {
int outerloop = 0;
int innerloop = 0;
int haystackLength = Str_getLength(haystack); 
int needleLength = Str_getLength(needle); 
assert(haystack != NULL);
assert(needle != NULL);
 if (Str_getLength(haystack) == 0) {
    return NULL;
 }
if (Str_getLength(needle) == 0) {
    return NULL;
 }
    while ( outerloop < haystackLength ) 
 {    
 
      innerloop = 0;
      while (innerloop < needleLength )
        {
         if (Str_compare(&haystack[outerloop], &needle[innerloop]) == 0 )
         {
            innerloop++;
            outerloop++;
         }
        else {
            outerloop++;
            break;
        }
        return (char*) &haystack[outerloop-needleLength-1];
        }
        outerloop++;
    }
    return NULL;
    }
