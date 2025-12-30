#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;                        
};
struct node *head=NULL;

void append(int data)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}

void display()
{
    struct node *temp=head;
    printf("Node datas : ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int n,data;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter value of node %d : ",i);
        scanf("%d",&data);
        if(data>0)
        {
            append(data);
        }
    }
    display();
    return 0;
}
