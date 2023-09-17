#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int mult(int a,int b)
{
    return a*b;
}
int main(){
    int (*p)(int,int);
    p=&mult;
    printf("value of mult %d\n",(*p)(20,20));
    int (*p1)(int,int);
    p1=add;
    printf("value of addition %d\n",p1(10,12));
    return 0;
}