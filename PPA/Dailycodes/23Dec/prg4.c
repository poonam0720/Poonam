#include<stdio.h>

#pragma pack(4)
struct book {

        char bname[20];
        int nPages;
        char x;
        double price;
};

void main() {

       printf("%ld\n",sizeof(struct book));  
}
