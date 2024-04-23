#include<stdio.h>
int a[10]={10,20,30,40,50},n=5; //Global Data
void Traverse(); //Functions Declarations 
void Insert();
void Delete();
int main()
{
 printf("\nBefore Insertion array elements are\n");
 Traverse();
 Insert();
 printf("\n\nAfter Insertion array elements are \n");
 Traverse();
 Delete();
 printf("\n\nAfter Deletion array elements are \n");
 Traverse();
 printf("\nGood Bye");
 
 return 0;
}


void Traverse()
{
 int i=0; //step 1
 while(i<n) //step 2
 {
 printf("%d\t",a[i]); //step 3
 i++; //step 4
 }
}
void Insert()
{
 int pos,item,i;
 printf("\nEnter the position to insert");
 scanf("%d",&pos);
 printf("\nEnter the element ");
 scanf("%d",&item);
 i=n-1;
 while(i>=pos)
 {
 a[i+1]=a[i];
 i--;
 }
 a[pos]=item;
 n=n+1;
 printf("\n%d is inserted at %d position",item, pos);
}
void Delete()
{
 int i,pos, item;
 printf("\nEnter the position to delete");
 scanf("%d",&pos);
 item=a[pos];
 i=pos;
 while(i<n)
 {
 a[i]=a[i+1];
 i++;
 }
 n--;
 printf("\n %d deleted from %d position",item,pos);
}

