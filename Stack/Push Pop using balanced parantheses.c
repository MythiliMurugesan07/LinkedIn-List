#include<stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char c)
{
    stack[++top]=c;
}
char pop()
{
    return stack[top--];
}
int ismatching(char open,char close)
{
    if(open == '(' && close == ')')
    {
        return 1;
    }
    if(open == '{' && close == '}')
    {
        return 1;
    }
    if(open == '[' && close == ']')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char expr[MAX];
    int balanced = 1;
    printf("Enter expression:");
    scanf("%s",expr);
    for(int i=0;i<strlen(expr);i++)
    {
        char ch=expr[i];
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
            if(!ismatching(open,ch))
            {
                balanced=0;
                break;
            }
        }
    }
    if(top!=-1)
       balanced=0;
    if(balanced)
       printf("parenthesis are balanced");
    else
       printf("parenthesis are not balanced");
    return 0;
}
