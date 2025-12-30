

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front=0,rear=-1;

int main()
{
    int n;
    printf("Enter number of elements (max %d) : ",MAX);
    scanf("%d",&n);
    
    if(n>MAX)
    {
        printf("Queue Overflow");
        return 0;
    }
    printf("Enter queue elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&queue[i]);
        rear++;
    }
    if(front>rear)
    {
        printf("Queue underflow");
    }
    else
    {
        printf("Deleted element : %d\n",queue[front]);
        front++;
    }
    printf("Queue after dequeue : ");
    if(front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
