#include<stdio.h>

int sum(int a, int b)  {

    return a+b;
}

int sub(int a, int b)  {

    return a-b;
}

struct math  {

     int (*sumptr)(int,int);
     int (*subptr)(int,int);
};

int main()  {

       struct math obj;
       obj.sumptr = sum;
       obj.subptr = sub;
       int a = (obj.sumptr)(10,5);
       int b = (obj.subptr)(10,5);
       
       printf("%d, %d",a,b); //15,5
       
       return 0;

}
