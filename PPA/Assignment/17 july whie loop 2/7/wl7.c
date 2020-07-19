#include<stdio.h>
void main()
{
   char lb='A',ub='Z';
   //int a=lb,b=ub;
   
   printf("Enter lower bound and upper bound:\n");
   scanf("%c %c",&lb,&ub);
   
   //printf("Enter upper bound:\n");
   //scanf("%c",&lb);
   
   while(lb<=ub)
   {
      if(lb=='A'||lb=='E'||lb=='I'||lb=='O'||lb=='U')
      {
          printf("%c is a vowel\n",lb);
      }
      else
      {
           printf("%c is a consonant\n",lb);
      }
      lb++;
   }
}
