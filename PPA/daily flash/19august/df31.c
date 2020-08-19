#include<stdio.h>
int  main()
{
   char ch;
   printf("Enter character=\n");
   scanf("%c",&ch);
   
   if(ch>='a'&& ch<='z')
   {
       printf("letter %c is lower case\n",ch);
   }
   else if(ch>='A'&& ch<='z')
   {
      printf("letter %c is upper case\n",ch);
   }
   return 0;
}
/*
Enter character=
v
letter v is lower case

*/
