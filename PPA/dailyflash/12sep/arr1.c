#include<stdio.h>
int main()
{
    int n,count=0,count1=0;
    
    printf("Enter size of array=\n");
    scanf("%d",&n);
    
    char varray[n];
    
    printf("Enter character in array=\n");
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&varray[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(varray[i]>=65 || varray[i]<=90 && varray[i]>=97 || varray[i]<=122)
        {
            if(varray[i]=='A' || varray[i]=='E' || varray[i]=='I'|| varray[i]=='O' || varray[i]=='U' || varray[i]=='a' || varray[i]=='e' || varray[i]=='i' || varray[i]=='o' || varray[i]=='u' )
            {
               count++;
            }
            else
            {
               count1++;
            }
        }
    }
    printf("Vowels=%d\n",count);
    printf("Consonent=%d\n",count1);
    
    return 0;
}
/*

Test Case:1
Enter size of array=
4
Enter character in array=
J  
a
K
E
Vowels=2
Consonent=2

Test case:2
Enter size of array=
4
Enter character in array=
H 
I
o
u
Vowels=3
Consonent=1
*/
