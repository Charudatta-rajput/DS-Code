#include<stdio.h>
int main()
{
 int a[10],n=10,temp,k,i;
 printf("\nEnter 10 numbers "); //Read numbers inside array
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }

 for(k=1; k<=n-1; k++)
 {
 for(i=0; i<n-k; i++)
 {
 if(a[i]>a[i+1])
 {
 temp=a[i];
 a[i]=a[i+1];
 a[i+1]=temp;
 }
 }// end of inner loop
 } // end of outer loop
 printf("\nAfter Bubble sort ");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
return 0;
}
