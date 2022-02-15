#include <stdio.h>
int isempty();
int isfull();
void display();
void insert(int item);
int delete();
#define n 10
int q[n],front = -1,rear =-1;
int main()
{
   int item,a,o;
    do
     { 
       printf("\n1)insert\n2)delete\n3)display\n4)end");
       printf("\nenter the number to perform the operation");
       scanf("%d",&o);
       switch(o)
        {
          case 1 : printf("\nenter the element to be inserted into queue");
                       scanf("%d",&a);
                       insert(a);
                       break;
          case 2 : if(!isempty())
                    printf("\nthe deleted element is %d",delete());
                    else
                    printf("\nthe queuee is empty");
                   break;        
         case 3 : display();
                   break;
         }
                                   
        }while(o!=4);
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
 void insert(int item)
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
 int delete()
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


