#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*link;
};
struct node*head=NULL;
void InsertFirst()
{
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("No space available\n");
  return;
 }
 newnode->link=NULL;
 printf("Enter the value:");
 scanf("%d",&newnode->data);
 if(head==NULL)
 {
  head=newnode;
 }
 else
 {
  newnode->link=head;
  head=newnode;
 }
 printf("Element %d inserted successfully\n",newnode->data);
}
void InsertLast()
{
 struct node*temp=head,*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("No space available\n");
  return;
 }
 newnode->link=NULL;
 printf("Enter the element to insert last:");
 scanf("%d",&newnode->data);
 if(head==NULL)
 {
  head=newnode;
 }
 else
 {
  while(temp->link!=NULL)
  {
   temp=temp->link;
  }
  temp->link=newnode;
 }
 printf("Element inserted %d\n",newnode->data);
}
void InsertLocation()
{
 int key;
 struct node *temp = head, *newnode;
 if(head == NULL)
 {
   printf("List empty\n");
   return;
 }
 printf("Enter the element after which you want to add element:");
 scanf("%d", &key);
 while(temp != NULL && temp->data != key)
 {
  temp = temp->link;
 }
 if(temp == NULL)
 {
  printf("Value does not exist\n");
  return;
 }
 newnode = (struct node*)malloc(sizeof(struct node));
 if(newnode == NULL)
 {
  printf("No space available\n");
  return;
 }
 printf("\nEnter the element to insert:");
 scanf("%d", &newnode->data);
 newnode->link = temp->link;
 temp->link = newnode;
 printf("Value inserted successfully %d\n", newnode->data);
}
void DeleteFirst()
{
 struct node*temp=head;
 if(head==NULL)
 {
  printf("\n List empty\n");
  return;
 }
 head=temp->link;
 printf("Value deleted %d\n",temp->data);
 free(temp);
}
void DeleteLast()
{
 struct node*temp=head,*prev=NULL;
 if(head==NULL)
 {
  printf("List empty\n");
  return;
 }
 if(temp->link==NULL)
 {
  printf("Value %d deleted \n",temp->data);
  head=NULL;
  free(temp);
  return;
 }
 while(temp->link!=NULL)
 {
  prev=temp;
  temp=temp->link;
 }
 printf("Value %d deleted\n",temp->data);
 prev->link=NULL;
 free(temp);
}
void DeleteLocation()
{
 int key;
 struct node *temp = head;
 struct node *prev = NULL;
 if (head == NULL)
 {
  printf("\nEmpty list\n");
  return;
 }
 printf("Enter the element that you want to delete:");
 scanf("%d", &key);
 if (head->data == key)
 {
  temp = head;
  head = head->link;
  printf("\nValue %d is deleted\n", temp->data);
  free(temp);
  return;
 }
 while (temp != NULL && temp->data != key)
 {
  prev = temp;
  temp = temp->link;
 }
 if (temp == NULL)
 {
  printf("Value does not exist\n");
  return;
 }
 prev->link = temp->link;
 printf("Value %d is deleted\n", temp->data);
 free(temp);
}
void Search()
{
 struct node *temp = head;
 int pos = 0, found = 0, val;
 if (head == NULL)
 {
  printf("Empty list\n");
  return;
 }
  printf("Enter the value to search:");
  scanf("%d", &val);
  while (temp != NULL)
  {
   if (temp->data == val)
   {
    printf("%d found at location %d\n",temp->data, pos + 1);
            found = 1;
            break;
   }
   pos++;
   temp = temp->link;
  }
  if (!found)
  {
   printf("\nValue %d does not exist\n", val);
  }
}
void Display()
{
 struct node*temp=head;
 if(temp==NULL)
 {
  printf("List Empty\n");
  return;
 }
 printf("Element in the list:\n");
 while(temp!=NULL)
 {
  printf("%d\n",temp->data);
  temp=temp->link;
 }
}

void main()
{
 int choice;
 do
 {
  printf("\n\n---SINGLY LINKED LIST---");
  printf("\n1. Insert First\n2. Insert Last\n3. Insert Location\n4. Delete First\n5. Delete Last\n6. Delete Location\n7. Search\n8. Display\n9. Exit\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: InsertFirst();
   	break;
   case 2: InsertLast();
   	break;
   case 3: InsertLocation();
   	break;
   case 4: DeleteFirst();
   	break;
   case 5: DeleteLast();
   	break;
   case 6: DeleteLocation();
   	break;
   case 7: Search();
   	break;
   case 8: Display();
   	break;
   case 9: printf("Exit");
   	exit(0);
   default:printf("Invalid choice");
  }
 }while(choice!=9);
}
