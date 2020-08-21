#include<stdio.h>
int main()
{
   int unit;
   float res;
   
   printf("Enter electricity charge=\n");
   scanf("%d",&unit);
   
   if(unit<=50)
   {
       res=(unit*0.50);
   }
   else if(unit<=150)
   {
         res=((50*0.50)+(unit-50)*0.75);
   }
   else if(unit<=250)
   {
         res=(50*0.50)+((150-50)*0.75)+(unit-150)*1.20;
   }
   else
   {
      res=(50*0.50)+((150-50)*0.75)+((250-150)*1.20)+(unit-250)*1.50;
   }
   
   printf("Electricity bill=Rs. %.2f\n",res);
   return 0;
}
/*
Enter electricity charge=
50
Electricity bill=Rs. 25.00


Enter electricity charge=
100
Electricity bill=Rs. 62.50


Enter electricity charge=
100
Electricity bill=Rs. 62.50


Enter electricity charge=
250
Electricity bill=Rs. 220.00

*/ 

