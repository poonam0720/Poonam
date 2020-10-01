#include<stdio.h>
int main() {

     int year;
     
     float sal[6];
     
     printf("Enter salary from 2015=\n");
     for(int itr=0; itr<6; itr++){
     
         scanf("%f",&sal[itr]);
     }
     
     printf("Enter year=\n");
     scanf("%d",&year);
     
     float *fptr = &sal[0];
     
     if(year == 2015){
     
        printf("%f\n",*fptr);
     }
     
     else if(year == 2016){
     
        printf("%f\n",*(fptr + 1));
     }
     
     else if(year == 2017){
     
        printf("%f\n",*(fptr + 2));
     }
     
     else if(year == 2018){
     
        printf("%f\n",*(fptr + 3));
     }
     
     else if(year == 2019){
     
        printf("%f\n",*(fptr + 4));
     }
     
     else if(year == 2020){
     
        printf("%f\n",*(fptr + 5));
     }
     
     else
       printf("Invalid year\n");
       
       
       return 0;
}

/*
Enter salary from 2015=
10000.00
20000.00
30000.00
40000.00 
50000.00
60000.00
Enter year=
2017
30000.000000

*/
