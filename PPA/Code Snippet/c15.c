#include<stdio.h>
#define L 10
void main()
{
    auto money=10;
    switch(money,money*2)  
    {
       case L:
       printf("Willian\n");
       break;
       
       
       case L*2:
       printf("Warren\n");
       break;
       
       case L*3:
       printf("Carlos\n");
       break;
       
      default:
       printf("Lawrence\n");
       
       case L*4:
       printf("Inquar\n");
       break;
    }
}
