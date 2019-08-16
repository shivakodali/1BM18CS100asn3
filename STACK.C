#include<stdio.h>
#include<conio.h>
#include<process.h>
#define stack_size 30
void push(int *top, int shirt)
{
if (*top==stack_size)
printf("the cupboard is full");
else
{
(*top)++;
printf("one shirt has been placed in the cupboard\n");
printf("total number of shirts in the cupboard:%d\n",shirt);
}
}
int pop(int *top,int shirt)
{
if(*top==0)
{
printf("the cupboard is empty\n");
shirt++;
}
else
{
printf("one shirt has been removed from the cupboard\n");
(*top)--;
printf("the total number of shirts remaining in the cupboard:%d\n",shirt);
}
return shirt;
}
void main()
{
int stack[stack_size],top=0;
int x,shirt=0;
clrscr();
while (1)
{
printf("1:arrange shirts in the cupboard\n");
printf("2:remove shirts from the cupboard\n");
printf("3:exit the code\n");
scanf("%d",&x);
switch(x)
{
case 1:
{ shirt++;
push(&top,shirt);
break;
}
case 2:
{shirt--;
shirt=pop(&top,shirt);
break;
}
case 3:
{
exit (0);
break;
}
default:
{
printf("enter a valid option\n");
break;
}
}
}
getch();
}
