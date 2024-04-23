#include<stdio.h>
int main()
{
 int a[10]={30,20,50,40,67,34,89,33,12,25};
 int item,n=10,pos;
 printf("\nArray elements are..\n");
 for(pos=0;pos<n;pos++)
 printf("%d ",a[pos]);
 printf("\n\nEnter the number to search in the array ");
 scanf("%d",&item);
 pos=0;
 while(pos<n)
 {
 if(a[pos]==item)
 {
 printf("\n %d is found at %d position",item,pos);
 break;
 }
 pos++;
 }
 if(pos==n)
 printf("\n%d is not found in the array",item);
 
 return 0;
} 
