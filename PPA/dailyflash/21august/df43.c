#include<stdio.h>
int main()
{
    int age;
    char sex,marr_status;
    
    printf("Enter age=\n");
    scanf("%d",&age);
    
    printf("Enter sex=\n");
    scanf("%c ",&sex);
    
    printf("Enter marital status=\n");
    scanf("%c ",&marr_status);
    
    if(sex=='F')
    {
        printf("Place of service=urban areas\n");
    }
    else if(sex=='M' && age>=20 || age<=40)
    {
        printf("Place of service=anywhere\n");
    }
    else if(sex=='M' && age>=40 || age<=60)
    {
        printf("Place of service=Urban areas\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}
/*
Enter age=
45
Enter sex=
F
Enter marital status=
Y
Place of service=Urban areas


Enter age=
35
Enter sex=
M
Enter marital status=
Y
Place of service=anywhere


Enter age=
50
Enter sex=
M
Enter marital status=
Y
Place of service=Urban areas



*/
