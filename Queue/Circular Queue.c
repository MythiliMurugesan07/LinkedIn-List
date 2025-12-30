

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int data)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(front==NULL)
    {
        front=rear=newNode;
        newNode->next=front;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
        rear->next=front;
    }
}

void display()
{
    if(front==NULL)
    {
        printf("Queue is empty");
        return;
    }
    struct node *temp=front;
    printf("Queue elements : ");
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=front);
}

int main()
{
    int n,data;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter value %d : ",i);
        scanf("%d",&data);
        enqueue(data);
    }
    display();
}
