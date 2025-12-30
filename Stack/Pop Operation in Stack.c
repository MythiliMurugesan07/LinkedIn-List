#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top=-1;

int main()
{
    int n,val;
    printf("Enter no. of values to insert (0 to %d) : ",MAX);
    scanf("%d",&n);
    
    if(n>MAX)
    {
        printf("Stack Overflow\n");
        return 0;
    }
    
    for(int i=1;i<=n;i++)
    {
        printf("Enter value %d : ",i);
        scanf("%d",&val);
        stack[++top]=val;
    }
    
    printf("Values in Stack : ");
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    
    if(top==-1)
    {
        printf("\nStack underflow");
    }
    else
    {
        printf("\nElement deleted is %d",stack[top]);
        top--;
    }
    
    if(top==-1)
    {
        printf("\nThe list is empty");
    }
    else
    {
        printf("\nStack after pop operation : ");
        for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    
}
