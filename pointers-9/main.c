#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
void push(struct Node *head,int data){
while(head->next!=NULL){
    head=head->next;
}
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->val=data;
temp->next=NULL;
head->next=temp;
}
void print(struct Node *head){
    while(head!=NULL){
        printf("%d \n",head->val);
        head=head->next;
    }
}
int main(){
    struct Node *head; 
    head=(struct Node*)malloc(sizeof(struct Node));
    head->val=10;
    head->next=NULL;
    push(head,20);
    push(head,30);
    push(head,40);
    print(head);
    return 0;
}