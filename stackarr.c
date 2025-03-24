#include<stdio.h>
int top=-1; 
int stack[10];
int n;
void push();
void pop();
void display();
void peek();
void main()
{
	printf("Enter a stack of size: ");
	scanf("%d",&n);
	push();
	push();
	push();
	push();
	peek();
	pop();
	display();
	pop();
	pop();
}
void push()
{
	int val;
	if(top = n-1)
		printf("Overflow i.e can't push item\n");
	else
		printf("enter value:");
		scanf("%d",&val);
	top = top+1;
	stack[top] = val;
	printf("sucessfully pushed");
}
void peek()
{
	if(top == -1)
	{
		printf("Empty\n");
	}
	else
	{
		printf("%d",stack[top]);
	}
}
void pop()
{
	if(top == -1)
	{
		printf("Overflow");
	}
	else
	{
		top = top-1;
		printf("Deleted successfully\n");
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i++)
	{
		printf("%d",stack[i]);
	}
	if(top == -1)
	{
		printf("stack is empty\n");
	}
}