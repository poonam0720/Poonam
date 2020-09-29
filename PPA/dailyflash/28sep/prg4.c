#include<stdio.h>
int main(){

     int num,count = 0,total=0;
     float per;
     
     printf("Enter numbers of subjects=\n");
     scanf("%d",&num);
     
     int arr1[num];
     
     int *iptr1 = arr1;
     
     printf("Enter marks of subject=\n");
     for(int itr=0; itr<num; itr++){
     
         scanf("%d",&arr1[itr]);
         
         total = total + *(iptr1 + itr);
         
         count++;
     }
     
     per = (total/count) * 100;
     
     printf("Percentage=%f\n",per);
     
     return 0;
     
}
