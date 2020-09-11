#include <stdio.h>
 
int main()
{
    int dd,mm,yy;
     
    printf("Enter date=\n");
    scanf("%d",&dd);
    
    printf("Enter month=\n");
    scanf("%d",&mm);
    
    printf("Enter year=\n");
    scanf("%d",&yy);
     
   
    if(yy>=1900 && yy<=9999)
    {
       
        if(mm>=1 && mm<=12)
        {
       
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Date does not exist\n");
        }
        else
        {
            printf("Month does not exist\n");
        }
    }
    else
    {
        printf("Year does not exist\n");
    }
 
    return 0;    
}
/*
Enter date=
30
Enter month=
2
Enter year=
1998
Date does not exist
*/
