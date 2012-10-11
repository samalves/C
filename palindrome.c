#include <stdio.h>
#include <string.h>

#define false 0
#define true (!false)

/* gcc -std=c99 -W palindrome.c -o palindrome */

int is_palindrom(char word[])
{
   int length = strlen(word);

   for (int i = 0; i < length/2; i++)
   {
      if (word[i] != word[length-1-i]) return false;
   }

   return true;
}

int main() {

   char word[] = "xamax";
   if (is_palindrom(word)) printf ("It's a palindrome\n");
}
