#include<stdio.h>
int main()
{
 int arr[5],n,i,sum=0;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The array elements are: \n");
 for(i=0;i<n;i++)
 {
  printf("%d \n",arr[i]);
 }
 for(i=0;i<n;i++)
 {
  sum+=arr[i];
 } 
 printf("The sum of array elements are:%d",sum);
}   
