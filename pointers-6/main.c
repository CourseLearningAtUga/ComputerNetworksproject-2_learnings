#include <stdio.h>
#include <string.h>

void print(char *c){
    while(*c!='\0'){
        printf("%c",*c);
        c++;
    }
    printf("\n");
}
int main(){
    char c[30]="hello";
    printf("size of c is %d\n",sizeof(c));
    printf("length of c is %d\n",strlen(c));
    printf("%s\n",c);
    char c1[20];
    c1[0]='v';
    c1[1]='i';
    c1[2]='s';
    // c1[3]='h';
    c1[4]='a';
    // c1[5]='l';//try uncommenting
    c1[6]='\0';
    printf("%s\n",c1);
    print(c1);
    return 0;
}