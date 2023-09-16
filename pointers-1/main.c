#include <stdio.h>
int main(){
    int a;
    int *p;
    char c;
    char *p0;
    double d;
    double *p1;
    p=&a;
    a=8;
    printf("===============================\n");
    printf("address of p %d\n",p);
    printf("value of p %d\n",*p);
    printf("address of a %d\n",&a);
    *p=12;
    printf("value of a %d\n",a);
    printf("===============================\n");
    int b=20;
    *p=b;
    printf("address of p %d\n",p);
    printf("value of p is %d\n",*p);
    printf("address of b is %d\n",&b);
    printf("value of b is %d\n",b);
    printf("===============================\n");
    p=&b;
    printf("address of p %d\n",p);
    printf("value of p is %d\n",*p);
    printf("address of b is %d\n",&b);
    printf("value of b is %d\n",b);
    printf("===============================\n");
    printf("pointer arithematic\n");
   
    int k=10;
    int *kp=&k;
    printf("address of kp %d\n",kp);
    printf("value of kp is %d\n",*kp);
    printf("address of kp %d\n",kp+30);
    printf("value of kp is %d\n",*(kp+30));
    return 0;
}