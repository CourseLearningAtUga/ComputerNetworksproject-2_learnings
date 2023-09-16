#include <stdio.h>

int main(){
    int a=1025;
    int *p;
    p=&a;
    printf("address and value of p is %d and %d\n",p,*p);
    printf("address and value of p+1 is %d and %d\n",p+1,*(p+1));
    char *p1;
    p1=(char*)p;
    printf("address and value of p is %d and %d\n",p1,*p1);
    printf("address and value of p+1 is %d and %d\n",p1+1,*(p1+1));
    void *p2;
    return 0;
}