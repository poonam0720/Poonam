#include<stdio.h>
int num = 5;
int minimum();

void main() {

    int arr[num];
    
    printf("Enter array elements=\n");
    for(int i=0; i < num; i++) {
    
        scanf("%d",&arr[i]);
    }
    
    int sum = minimum(arr);
    
    printf("Minimum element=%d\n",sum);
}

int minimum(int arr[])  {

      int ans = arr[0];
      for(int i=0; i < num ; i++)  {
      
            if(ans > arr[i]){
            
                ans = arr[i];
            }
      }
      
      return ans;
       
}

/*
Enter array elements=
6
7
8
4
3
Minimum element=3

*/
