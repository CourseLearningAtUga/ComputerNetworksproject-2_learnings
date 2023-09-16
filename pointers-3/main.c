#include <stdio.h>

int main(){
    int x;
    x=10;
    int *p=&x;
    int **q=&p;
    int ***r=&q;
    printf("value of x is %d\n",x);
    printf("address and value of *p is %d and %d\n",p,*p);
    printf("address and value of **q is %d and %d\n",q,**q);
    printf("address and value of ***r is %d and %d\n",r,***r);
    ***r=23;
    printf("value of x is %d\n",x);
    **q=42;
    ***r+=*p;
    printf("value of x is %d\n",x);
    return 0;
}