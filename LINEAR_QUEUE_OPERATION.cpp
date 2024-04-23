#include<stdio.h>
#define MAX 5
int q[MAX],front=-1, rear=-1; //Global Data
void Insert(); //Functions Declarations
void Delete();
void Display();
int main()
{
 int ch;
 do
 {
 printf("\n\nMENU");
 printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit");
 printf("\nChoice ? ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: Insert(); break;
 case 2: Delete(); break;
 case 3: Display(); break;
 case 4: break;
 default:printf("\nWrong Choice ");
 }
 }while(ch!=4);
 printf("\nThank You");
 return 0;
} // end of main

void Insert()
{
 int item;
 if(rear==MAX-1)
 printf("\nOVERFLOW");
 else
 {
 printf("\nEnter the element to insert in Q ");
 scanf("%d",&item);
 if(rear==-1) //initially empty
 front=rear=0;
 else
 rear++;
 q[rear]=item;
 printf("\n%d is inserted in Q ",item);
 }
}
void Delete()
{
 int item;
 if(front==-1)
 printf("\nUNDERFLOW");
 else
 {
 item = q[front];
 if(front==rear) // Q contains single element
 front=rear=-1;
 else
 front++;
 printf("\n%d is deleted from Q",item);
 }
}

void Display()
{
 int i;
 if(front==-1)
 printf("\nQ is empty");
 else
 {
 printf("\nQ is ..\nFRONT-->");
 for(i=front;i<=rear;i++)
 printf("\t%d",q[i]);
 printf("\t<--REAR");
 }
}
