

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    int priority;
    struct node *next;
};
struct node *front=NULL;

void enqueue(int data,int priority)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->priority=priority;
    newNode->next=NULL;
    if(front==NULL || priority < front->priority)
    {
        newNode->next=front;
        front=newNode;
    }
    else
    {
        struct node *temp=front;
        while(temp->next!=NULL && temp->next->priority<=priority)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
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
    printf("Priority Queue values : ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int n,data,pri;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf("Enter value %d : ",i);
        scanf("%d",&data);
        printf("Enter priority : ");
        scanf("%d",&pri);
        enqueue(data,pri);
    }
    display();
}
