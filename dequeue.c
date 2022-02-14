#include <stdio.h>
int isempty();
int isfull();
void display();
void insert(int item);
int delete();
#define n 10
int q[n],front=-1,rear=-1;
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
          case 1 : if(isfull())
                    printf("\nthe queuee is full");
                    else
                     {
                       printf("\nenter the element to be inserted into queue");
                       scanf("%d",&a);
                       insert(a);
                      }
                    break;
          case 2 : if(isempty())
                     printf("\nthe queuee is empty");
                      else
                      {
                        a=delete();
                        printf("\nthe deleted element is %d",a);
                      }   
                     break;  
         case 3 : if(isfull())
                    printf("\nthe queuee is full");
                    else
                     {
                       printf("\nenter the element to be inserted into queue");
                       scanf("%d",&a);
                       insert(a);
                      }
                    break;
          case 4 : if(isempty())
                     printf("\nthe queuee is empty");
                      else
                      {
                        a=delete();
                        printf("\nthe deleted element is %d",a);
                      }   
                     break;       
         case 5 : if(isempty())
                     printf("\nthe queuee is empty");
                    else
                      display();
                   break;
         
                                   
        }while(o!=6);
 }
 
 int isempty()
 {
     if(front == -1)
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
   if(front=-1)
     front = rear = 0;
   else
     rear = (rear+1)%n;
    q[rear]=item;
 }
 void insertf(int item)
 {
   if(front=-1)
     front = rear = 0;
   else
     front = (front+n-1)%n;
    q[front]=item;
 }
 int deletef()
 {
   int a = q[front];
   if(front==rear)
      front=rear=-1;
    else
     front= (front+1)%n;
   return a;
 }
 int deleter()
 {
   int a = q[rear];
   if(front==rear)
      front=rear=-1;
    else
     rear= (rear+1)%n;
   return a;
 }
void display()
{
  for(int i=front;i<rear;i++)
    printf("\n %d",q[i]);
}  
    
