#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=20;
    printf("value of int p is %d\n",*p);
    int *p1;
    p1=(int*)malloc(20*sizeof(int));
    p1[0]=10;
    p1[1]=40;
    printf("value of p1[0] and p1[1] and p1[2] is %d and %d and %d\n",p1[0],*(p1+1),p1[2]);
    int (*p2)[3];
    p2=calloc(3,sizeof(*p2));
    p2[0][0]=230;
    printf("value of all six elements %d and %d and %d and %d and %d and %d\n",p2[0][0],p2[0][1],p2[0][2],p2[1][0],p2[1][1],p2[1][2]);
    free(p);
    free(p1);
    free(p2);
    return 0;
}