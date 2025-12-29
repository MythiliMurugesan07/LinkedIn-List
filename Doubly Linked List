#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;

void append(int data){
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}
void forwardDisplay(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void backwardDisplay(){
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
   
}
int main(){
    int n,data;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    printf("Enter the data in the nodes:");
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        if(data>0){
            append(data);
        }
    }
    printf("Print the element in the forward direction:");
    forwardDisplay();
    printf("\n");
    printf("Print the element in the backward direction:");
    backwardDisplay();
}
