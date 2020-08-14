#include<stdio.h>
void main()
{
    int num=7654321;
    int len=0;
    
    int dup=num;
    for(;num!=0;num=num/10)
    {
       len=len+1;
       
    }
    printf("Length of%d : %d units\n",dup,len);
}
/*

Length of7654321 : 7 units

*/
