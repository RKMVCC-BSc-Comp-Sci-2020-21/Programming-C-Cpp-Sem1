// string"s Vowel Count   by Sudipta Sarkar     date - 24 nov 2020

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[10];

  printf("Input a string\t");
  gets(s);

  while (s[c] != '\0') 
  
  {
  	
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
    
  }

  printf("Number of vowels: \t %d", count);

  return 0;
}
