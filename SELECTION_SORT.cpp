#include<stdio.h>
int main()
{
 int a[10],n=10,temp,k,i,pos;
 printf("\nEnter 10 numbers "); //Read numbers inside array
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(k=0; k<=n-1; k++) //apply selection sort 
 {
 pos=k;
 i=k+1;
 while(i<=n-1)
 {
 if(a[i]<a[pos])
 pos=i;
 i=i+1;
 }// end of inner loop
 temp=a[k];
 a[k]=a[pos];
 a[pos]=temp;
} // end of outer loop
printf("\nAfter Selection sort \n");//print sorted numbers
for(i=0;i<n;i++)
printf("%d\t",a[i]);
 
return 0;
}
