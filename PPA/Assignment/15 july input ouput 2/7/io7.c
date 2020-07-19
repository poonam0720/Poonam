#include<stdio.h>
void main()
{
   char ch;
 
   printf("Enter character:\n");
   scanf("%c",&ch);
   
   if(ch>='A' && ch<='Z')
   {
      printf("Entered character is in UPPERCASE\n");
   }
   else
   {
      printf("Entered character is in LOWERCASE\n");
   }
}
