#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter size of array=\n");
    scanf("%d",&n);
    
    int array[n];
    
    printf("Enter numbers in array=\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d ",&array[i]);
         printf("Values=%d\n",array[i]);
    }
  
    int array1[n];
    
    for(int i=0;i<n;i++)
    {
        if(array[i]<0)
        {
           printf("Error!\n");
        }
        else
        {
          int fact=1;
          for(int j=1;j<=array[i];j++)
          {
            fact=fact*j;
          }
          array1[i]=fact;       
        }
    }
    
    printf("Array numbers=\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
    
    printf("Factorial of array numbers=\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    
}
