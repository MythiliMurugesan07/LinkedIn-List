

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX];
int top=-1;

void push(char ch)
{
    stack[++top]=ch;
}

char pop()
{
    return stack[top--];
}

int isMatching(int open,int close)
{
    if(open=='(' && close==')')
    {
        return 1;
    }
    else if(open=='[' && close==']')
    {
        return 1;
    }
    else if(open=='{' && close=='}')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char str[100];
    int balanced=1;
    printf("Enter parenthesis string : ");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']')
        {
            if(top==-1)
            {
                balanced=0;
                break;
            }
            char open=pop();
            if(!isMatching(open,ch))
            {
                balanced=0;
            }
        }
    }
    if(top!=-1)
        balanced=0;
    if(balanced)
    {
        printf("Valid Parenthesis");
    }
    else
    {
        printf("Invalid Parenthesis");
    }
    return 0;
}
