

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

int main()
{
    int n,val;
    printf("Enter number of values : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        struct node *newNode=malloc(sizeof(struct node));
        printf("Enter value %d : ",i);
        scanf("%d",&val);
        
        newNode->data=val;
        newNode->next=NULL;
        
        if(rear==NULL)
        {
            rear=front=newNode;
        }
        else
        {
            rear->next=newNode;
            rear=newNode;
        }
    }
    struct node *temp=front;
    printf("Values in queue : ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
