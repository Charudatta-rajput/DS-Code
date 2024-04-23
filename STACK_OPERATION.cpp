#include<stdio.h>
#define MAX 5
int stack[MAX]; //Global Data
int top=-1;
void push(); // function declaration
void pop();
void display();
int main()
{
 int ch;
 do //display menu, get choice and call function
 {
 printf("\nMENU");
 printf("\n1 Push\n2 Pop\n3 Display\n4 Exit");
 printf("\nChoice ? ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: push(); break;
 case 2: pop(); break;
 case 3: display(); break;
 case 4: break;
 default : printf("\nWrong Choice ");

 }
 }while(ch!=4);
 printf("\nThank You!");
 return 0;
} // end of main
void push()
{
 int item;
 if(top==MAX-1)
 printf("\nOVERFLOW");
 else
 {
 printf("\nEnter the number ");
 scanf("%d",&item);
 top=top+1;
 stack[top]=item;
 printf("\n%d is pushed onto stack",item);
 }
}
void pop()
{
 int item;
 if(top==-1)
 printf("\nUNDERFLOW");
 else
 {
 item = stack[top];
 top--;
 printf("\n%d is popped from stack ",item);
 }
}

void display()
{
 int i;
 if(top==-1)
 printf("\nStack is empty ");
 else
 {
 printf("\nStack is\n ");
 printf("\nTOP--> ");
 for(i=top;i>=0;i--)
 {
 printf("\t\t%d\n",stack[i]);
 }
 }
}

