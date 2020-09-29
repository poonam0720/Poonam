#include<stdio.h>
int main(){

    int num;

    printf("Enter size of array=\n");
    scanf("%d",&num);

    int arr1[num];
    
    int *iptr1 = arr1;

    printf("Enter array elements=\n");
    for(int itr=0; itr<num; itr++){
    
        scanf("%d",&itr[arr1]);
    }

    printf("Forward=\n");
    for(int itr=0; itr<num; itr++){
    
         printf("%d\n",*(iptr1+itr));
    }
    
    printf("Reverse=\n");
    for(int itr=num-1; itr>=0; itr--){
    
         printf("%d\n",*(iptr1+itr));
    }
    
    printf("\n");
      
}
/*
Enter size of array=
5
Enter array elements=
10
20
30
40
50
Forward=
10
20
30
40
50
Reverse=
50
40
30
20
10

*/
