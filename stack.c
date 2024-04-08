//Simple C-Stack Program
#include<stdio.h>
int top=-1;
int n;
int stack[100];
//To check whether the stack is empty
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
//To check whether the stack is full
int isfull()
{
    if(top==n)
        return 1;
    else
        return 0;
}
//To push element into the stack
int push(int data)
{
    if(!isfull())
    {
        top=top+1;
        stack[top]=data;
    }
    else
    {
        printf("Stack is Full!!\n");
    }
}
//To pop element from the stack
int pop()
{
    int data;
    if(!isempty())
    {
        data=stack[top];
        top=top-1;
        return data;
    }
    else
    {
        printf("Stack is Empty!!\n");
    }
}
//To seek the top element
int peek()
{
    return stack[top];
}

int main()
{
    int i=1;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    stack[n];
    while(i==1)
    {
        int ch;
        printf("Press 1. To push\nPress 2. To pop\nPress 3. For top element\nPress 4. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                int temp;
                printf("Enter the element: ");
                scanf("%d",&temp);
                push(temp);
                break;
            }
            case 2:
            {
                int del;
                del=pop();
                printf("The popped element is %d\n",del);
                break;
            }
            case 3:
            {
                int top;
                top=peek();
                printf("The top element is %d\n",top);
                break;
            }
            case 4:
            {
                i=0;
                break;
            }
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}