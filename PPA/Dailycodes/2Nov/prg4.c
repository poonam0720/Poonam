//Pointer to structure
#include<stdio.h>

struct Company{

     char type[20];
     int teamsize;
};

void main()  {

   struct Company client1 = {"Product", 8};
   
   struct Company *ptr1 = &client1;
   
   printf("%s\n",ptr1 -> type);   //Product
   printf("%d\n",ptr1 -> teamsize);  //8
   
   printf("%s\n",(*ptr1).type);   //Product
   printf("%d\n",(*ptr1).teamsize);  //8
   
   printf("%s\n",client1.type);   //Product
   printf("%d\n",client1.teamsize);  //8
}

/*
Product
8
Product
8
Product
8

*/
