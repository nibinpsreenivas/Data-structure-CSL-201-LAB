#include <stdio.h>
int isempty();
int isfull();
void display();
void insertf(int item);
int deletef();
void insertr(int item);
int deleter();
#define n 10
int q[n],front = -1,rear =-1;
int main()
{
   int item,a,o;
    do
     { 
       printf("\n1)insertr\n2)deletef\n3)insertf\n4)deleter\n5)display\n6)end");
       printf("\nenter the number to perform the operation");
       scanf("%d",&o);
       switch(o)
        {
          case 1 : printf("\nenter the element to be inserted into queue from rear");
                       scanf("%d",&a);
                       insertr(a);
                       break;
          case 2 : if(!isempty())
                    printf("\nthe deleted element from front is %d",deletef());
                    else
                    printf("\nthe queuee is empty");
                   break; 
         case 3 : printf("\nenter the element to be inserted into queue from front");
                       scanf("%d",&a);
                       insertf(a);
                       break;
          case 4 : if(!isempty())
                    printf("\nthe deleted element from rear is %d",deleter());
                    else
                    printf("\nthe queuee is empty");
                   break;         
         case 5 : display();
                   break;
         }
                                   
        }while(o!=6);
 }
 
 int isempty()
 {
     if(rear == -1)
      return 1;
     else 
      return 0;  
 }
 int isfull()
 {
    if(front == (rear+1)%n)
      return 1;
    else
      return 0;
 }
 void insertr(int item)
 {
   if(isfull())
          printf("\nthe queuee is full");
   else
  {
   if(front==-1)
     front = rear = 0;
   else
     rear = (rear+1)%n;
   q[rear]=item;
  }
 }
 int deletef()
 { 
   int a;
   if(isempty())
           printf("\nthe queuee is empty");
    else
   {
     a=q[front];
     if(front==rear)
       {
         front = rear =-1;
       }
     else
      front= (front+1)%n;
      return a;
}
 }
void insertf(int item)
 {
   if(isfull())
          printf("\nthe queuee is full");
   else
  {
   if(front==-1)
     front = rear = 0;
   else
     front = (front+n-1)%n;
   q[front]=item;
  }
 }
 int deleter()
 { 
   int a;
   if(isempty())
           printf("\nthe queuee is empty");
    else
   {
     a=q[rear];
     if(front==rear)
       {
         front = rear =-1;
       }
     else
      rear= (rear+n-1)%n;
      return a;
}
 }
void display()
{
  if(isempty())
       printf("\nthe queuee is empty");
 else
{
  for(int i=front;i!=rear;i=(i+1)%n)
   {
     printf("\n %d",q[i]);
    }
  printf("\n %d",q[rear]);
}
}  


