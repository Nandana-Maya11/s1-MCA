#include<stdio.h>
int main()
{ 
 int arr[100],i,j,n,temp;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter the numbers:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(arr[j]>arr[j+1])
   {
    temp=arr[j+1];
    arr[j+1]=arr[j];
    arr[j]=temp;
    break;
   }
  }
 }
 printf("After Sorting:");
 for(i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }
}    
