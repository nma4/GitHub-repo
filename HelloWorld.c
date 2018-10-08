#include <stdio.h>
int main()
{
   // printf() displays the string inside quotation
   printf("Hello, World!");
	   char *str;
 
   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);
 
   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);
 
  // free(str);

   return 0;
}