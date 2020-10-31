/* A String is Palindromic if it reads the same forward and backwards
   e.g. racecar
*/

 
#include <stdio.h>
#include <string.h>

int main()
{
  char a[100], b[100];
   int L;

  printf("Enter a string to check if it's a palindrome\n");
  gets(a);

  strcpy(b, a);  // Copying input string
  strrev(b);  // Reversing the string
   L=strlen(a); 

  if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
    printf("The string (%s) is a palindrome.\n",a);
  else
    printf("The string (%s) is not a palindrome.\n",a);

  return 0;
}
