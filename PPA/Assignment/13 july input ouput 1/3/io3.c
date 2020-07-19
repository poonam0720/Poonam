#include<stdio.h>
void main()
{
  char ch;
  
  printf("Enter character:\n");
  scanf("%c",&ch);
  
  if(ch=='a'||ch=='e'||ch=='e'||ch=='o'||ch=='u')
  {
     printf("%c is vowel\n",ch);
  }
  else
  {
     printf("%c is consonant\n",ch);
  }
}
