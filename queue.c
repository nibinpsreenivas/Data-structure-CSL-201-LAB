#include <stdio.h>
#define max 100
char q[max];
int front =-1,rear=-1;
int isfull()
{
  if(front==(rear+1)%max)
    return 1;
  else 
    return 0;
}
int isempty()
{ 
  if(front==-1)
   return 1;
  else 
   return 0;
}
void insert(int a)
{
  if(rear=-1)
    front=rear=0;
   else
     rear=(rear+1)%max;
  q[rear]=a;
  
}
int delete()
{
  int item = q[front];
  if(front=rear)
   front=rear=-1;
  else
   front =(front+1)%max;
  return item;
}
void display()
{
 if(front=rear=-1)
    printf("the queue is empty");
 else
   {
      for(int i=front;i<rear;i++)
         printf("%d",q[i]);
   }
}
int main()
{
  int y,a,item;
  do
   {
     printf("\n1)insert\n2)delete\n3)dispay\n4)exit");
     printf("\nenter the number to perfrom the operation");
     scanf("%d",&y);
     switch(y)
     {
       case 1:if(isfull())
             {
              printf("\nqueue is full");
              break;
             }
             else
             {
              printf("\nenter the element to perfrom insertion operation");
              scanf("%d",&a);
              insert(a);
              break;
             }
       case 2:if(isempty())
             {
              printf("\nthe queue is empty");
              break;
             }
             else
             {
              item = delete();
              printf("\nthe element is %d",item);
              break;
              }
          
       case 3:if(isempty())
             {
              printf("\nthe queue is empty ");
              break;
             }
              else
             {
              display();
              break;
             }
       
       default:printf("\nyou have entered a error operation");
     }
    }while(y!=4);
 } 
        


