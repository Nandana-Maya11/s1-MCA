#include<stdio.h>
int main()
{
 int m;
 printf("Enter the mark of the student:");
 scanf("%d",&m);
 if(m>95)
 {
  printf("Grade A+");
 }
 else if(m>90 && m<95)
 {
  printf("Grade A");
 }
 else if(m>80 && m<90)
 {
  printf("Grade B");
 }
 else if(m>70 && m<80)
 {
  printf("Grade C");
 }
 else if(m>60 && m<70)
 {
  printf("Grade D");
 }
 else if(m>50 && m<60)
 {
  printf("Grade E");
 }  
 else
 {
  printf("Faied");
 }
}   
