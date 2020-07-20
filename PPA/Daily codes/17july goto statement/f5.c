#include<stdio.h>
void main()
{
   int x=10;
   
   for(int i=1;i<=x;i++)
   {
      goto fordemo;
   }
   
   fordemo:
       printf("Printing.........");
    
}


*/ if we write goto statement inside the loop it will throw the statement out of the loop/*
