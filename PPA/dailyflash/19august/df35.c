#include<stdio.h>
int main()
{
    int ans=180;
    int Area_of_triangle=0;
    int a,b,c;
    
    printf("Enter sides of triangle=\n");
    scanf("%d %d %d",&a,&b,&c);
    
    Area_of_triangle=a+b+c;
    
    if(Area_of_triangle==ans)
    {
        printf("Thr triangle with angles %d %d %d is a valid\n",a,b,c);
    }
    else
    {
        printf("Thr triangle with angles %d %d %d is a invalid\n",a,b,c);
    }
    return 0;
}
/*
Enter sides of triangle=
30
60
70 
Thr triangle with angles 30 60 70 is a invalid

*/
