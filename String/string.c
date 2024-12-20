/* Write a C program to accept a string from console and to display the following on console:
   i)length 
   ii)total no of ch
   iii)total no of vowels
   iv)copy one str into other. */
   
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50];
    int i, count=0;
    printf("\n\nFind the length of a string:\n ");
 
    printf("Input a string : ");
    gets(str);
 
    for (i = 0; str[i] != '\0'; i++);        // '\0' means 'null vlaue' and '!='' means 'not equal to'
   
    printf("The string contains %d  number of characters. \n",i);
    printf("So, the length of the string '%s' is : %d\n\n", str, I);
   

// Total no of vowels in a string
  
    i=0;
    while (str[i] != '\0')
    {
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] =='o' || str[i]=='O' || str[i] == 'u' || str[i] == 'U')
      count++;
      i++;
    }
    printf("\n Number of vowels in the string '%s' is: %d",str, count);
   
// copy one string to another string
 
    char s1[50];
    for (i = 0; str[i] != '\0'; i++)
         {
             s1[i] = str[i];
         }
         s1[i] = '\0';
   
    printf("\n \nCopy of String '%s' is s1: %s", str, s1);
    return 0;
}
