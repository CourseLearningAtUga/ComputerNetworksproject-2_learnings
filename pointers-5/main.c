#include <stdio.h>

int sumofElementsthatdoesnotwork(int a[]){
int ret=0,i;
printf("value of size of a and a[0] is %d and %d\n",sizeof(a),sizeof(a[0]));
int size=sizeof(a)/sizeof(a[0]);
for(i=0;i<size;i++){
    ret+=a[i];
}
return ret;
}
int sumofElementsthatdoeswork(int a[],int size){
int ret=0,i;
for(i=0;i<size;i++){
    ret+=a[i];
}
return ret;
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int size=sizeof(a)/sizeof(a[0]);
    printf("value of size of a and a[0] is %d and %d\n",sizeof(a),sizeof(a[0]));
    int v1=sumofElementsthatdoesnotwork(a);
    int v2=sumofElementsthatdoeswork(a,size);
    printf("sum from sumofElementsthatdoesnotwork %d\n",v1);
    printf("sum from sumofElementsthatdoeswork %d\n",v2);
    return 0;
}