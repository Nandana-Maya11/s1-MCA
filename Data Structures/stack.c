#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int item)
{
 if(top==MAX-1)
 {
  printf("Stack Ovreflow!!");
  return;
 }
 stack[++top]=item;
 printf("%d pushed to stack",item);
}
void pop()
{
 if(top==-1)
 {
  printf("Stack Underflow!!!");
  return;
 }
 printf("%d popped from stack",stack[top--]);
}
void peek()
{
 if(top==-1)
 {
  printf("Stack is empty!!");
  return;
 }
 printf("Top element is %d",stack[top]);
}
void display()
{
 if(top==-1)
 {
  printf("Stack is empty!!");
  return;
 }
 printf("Stack elements are:");
 for(int i=top;i>=0;i--)
 {
  printf("\n %d",stack[i]);
 }
}
int main()
{
 int choice,value;
 while(1)
 {
  printf("\n\nStack Operations Menu");
  printf("\n1.Push");
  printf("\n2.Pop");
  printf("\n3.Peek");
  printf("\n4.Display");
  printf("\n5.Exit");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("Enter value to push:");
          scanf("%d",&value);
          push(value);
          break;
   case 2:pop();
          break;
   case 3:peek();
          break;
   case 4:display();
          break;     
   case 5:printf("Exiting program");
          return 0;     
   default:printf("Invalid choice");
  }
 }
}                       
