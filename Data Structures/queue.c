#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int item)
{
 if(rear==MAX-1)
 {
  printf("Queue Overflow\n");
 }
 else
 {
  if(front==-1)
  front=0;
  rear++;
  queue[rear]=item;
  printf("%d inserted into the queue\n",item);
 }
}
void dequeue()
{
 if(front==-1 || front>rear)
 {
  printf("Queue Underflow\n");
 }
 else
 {
  printf("Deleted element is %d\n",queue[front]);
  if(front==rear)
  {
   front=rear=-1;
  }
  else
  {
   front++;
  }
 }
}
void display()
{
 int i;
 if(front==-1)
 {
  printf("Queue is empty\n");
 }
 else
 {
  printf("Queue elements are:");
  for(i=front;i<=rear;i++)
  {
   printf("%d\n",queue[i]);
  }
 }
}
void peek()
{
 if(front==-1)
 {
  printf("Queue is empty\n");
 }
 else
 {
  printf("Front element is %d\n",queue[front]);
 }
}
int main()
{
 int choice,item;
 do
 {
  printf("---QUEUE OPERATIONS---");  
  printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Peek \n5.Exit\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  { 
   case 1:printf("Enter the element:");
         scanf("%d",&item);
         enqueue(item);
         break;
   case 2:dequeue();
         break;
   case 3:display();
         break;
   case 4:peek();
         break;
   case 5:printf("Program Ended\n");
         break; 
   default:printf("Invalid choice\n");
  }
 }while(choice!=5);
 return 0;
}                                          
