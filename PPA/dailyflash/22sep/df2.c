#include<stdio.h>
int main(){

     int num;
     printf("Enter number of students=\n");
     scanf("%d",&num);
     
     int roll_num[num];
     int pincode[num];

         for(int itr=0;itr<num;itr++){
     
          printf("Enter roll numbers=\n");
          scanf("%d",&roll_num[itr]);
     
          printf("Enter pincodes=\n");
          scanf("%d",&pincode[itr]);
     }
     
     int *rptr = &roll_num[0];
     int *dptr = &pincode[0];
     
     for(int itr=0;itr<num;itr++){
     
         printf("Roll number=%d ,  Pincode=%d\n",*rptr,*dptr);
         rptr++;
         dptr++;
     }
     
     return 0;
}
/*
Enter number of students=
3
Enter roll numbers=
1
Enter pincodes=
400008
Enter roll numbers=
2
Enter pincodes=
400215
Enter roll numbers=
3
Enter pincodes=
415005
Roll number=1 ,  Pincode=400008
Roll number=2 ,  Pincode=400215
Roll number=3 ,  Pincode=415005

*/
