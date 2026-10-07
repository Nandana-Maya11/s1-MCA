#include<stdio.h>
int main()
{
 int arr[50],n,i;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Even numbers are:\n");
 for(i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  {
   printf("%d\n",arr[i]);
  }
 } 
 printf("odd numbers are:\n");
 for(i=0;i<n;i++)
 {
  if(arr[i]%2!=0)
  {
   printf("%d\n",arr[i]);
  }
 }
}     
