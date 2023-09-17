#include <stdio.h>
int increment(int *a){
a[0]++;
a[1]++;
a[2]++;
}
int print(int *a){
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[]={10,20,30};
    printf("value and adress of a is  %d and %d\n",a,*a);
    printf("value and adress of a+1 is  %d and %d\n",a+1,*(a+1));
    print(a);
    increment(a);
    print(a);
    return 0;
}