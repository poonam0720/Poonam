#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character=\n");
    scanf("%c",&ch);
    
    int lower=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    int upper=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lower||upper)
    {
        printf("%c is vowel\n",ch);
        
    }
    else
    {
        printf("%c is consonent\n",ch);
    }
    return 0;
}
/*
Enter character=
E
E is vowel

*/
