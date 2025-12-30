

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

int main()
{
    int n,value;
    printf("Enter number of elements to insert (max %d) : ",MAX);
    scanf("%d",&n);
    
    if(n>MAX)
    {
        printf("Queue Overflow");
        return 0;
    }
    
    front=0;
    for(int i=1;i<=n;i++)
    {
        printf("Enter value %d : ",i);
        scanf("%d",&value);
        queue[++rear]=value;
    }
    
    printf("Values in Queue : ");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
