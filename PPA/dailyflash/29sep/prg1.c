#include<stdio.h>
int main(){

    int num;
    printf("Enter size of array=\n");
    scanf("%d",&num);
    
    int arr1[num];
    int *iptr = arr1;
    printf("Enter array elements=\n");
    for(int itr=0; itr<num; itr++){
    
        scanf("%d",&arr1[itr]);
    }
    
    printf("Output=\n");
    for(int itr=0; itr<num; itr++){
    
        printf("%d\n",*(iptr+itr));
    }
    printf("\n");
    
    return 0;
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
Output=
10
20
30
40
50

*/
