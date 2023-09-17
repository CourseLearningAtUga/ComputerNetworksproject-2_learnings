#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node *next;
    struct Node *prev;
};
void push(struct Node *head,int data){
while(head->next!=NULL){
    head=head->next;
}
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->val=data;
temp->next=NULL;
temp->prev=head;
head->next=temp;
}
void print(struct Node *head){
    while(head->next!=NULL){
        printf("%d ",head->val);
        head=head->next;
    }
    printf("%d\n",head->val);
    while(head!=NULL){
        printf("%d ",head->val);
        head=head->prev;
    }
}
int main(){
    printf("hello world\n");
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    head->val=10;
    head->next=NULL;
    head->prev=NULL;
    for(int i=0;i<10;i++){
        push(head,i*10);
    }
    print(head);
    printf("\n");
    printf("\n");
    print(head);
    return 0;
}