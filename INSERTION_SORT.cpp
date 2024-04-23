#include<stdio.h>
int main()
{
 int a[10],n=10,temp,k,i;
 printf("\nEnter 10 numbers "); //Read numbers inside array
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(k=1;k<=n-1;k++) //apply insertion sort
 {
 temp=a[k];
 i=k-1;
 while(i>=0 && a[i]>temp)
 {
 a[i+1]=a[i];
 i--;
 }// end of inner loop
 a[i+1]=temp;
 } // end of outer loop
 printf("\nAfter Insertion sort "); //print sorted numbers
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 return 0;
}

