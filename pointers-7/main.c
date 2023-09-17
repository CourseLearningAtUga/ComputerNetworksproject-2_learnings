#include <stdio.h>
int func(int (*a)[2][2]){
printf("value in a is %d\n",a[0][0][0]);
}
int main(){
    int a[2][3]={{1,2,3},
                {4,5,6}};
   
    printf("are the same address %d and %d and %d\n",a,a[0],*a);
    printf("are the same address %d and %d\n",a[1],*(a+1));
    printf("are the same address %d and %d\n",&a[1][2],(*(a+1)+2));

    printf("are the same value %d and %d\n",a[1][2],*(*(a+1)+2));
    printf("are the same value %d and %d\n",a[1][1],*(*(a+1)+1));
    printf("are the same value %d and %d\n",a[0][0],**a);
    printf("are the same value %d and %d\n",a[0][1],*(*a+1));
    int C[3][2][2]={{{2,5},{7,9}},
                    {{3,4},{23,14}},
                    {{123,2},{12,23}}};
                    func(C);
    return 0;
}