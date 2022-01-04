#include <stdio.h>
#define n 50
void push(int);
void display();
int pop();
int peek();
int isfull();
int isempty();
int top=0,s[n];
int main()
{
  int item,o,a;
  do
   {
     printf("\n1)push\n2)pop\n3)dispay\n4)peak\n5)exit");
     printf("\nenter the number to perfrom the operation");
     scanf("%d",&o);
     switch(o)
     {
       case 1:if(isfull())
             {
              printf("\nstack is full");
              break;
             }
             else
             {
              printf("\nenter the element to perfrom push operation");
              scanf("%d",&a);
              push(a);
              break;
             }
       case 2:if(isempty())
             {
              printf("\nthe stack is empty");
              break;
             }
             else
             {
              item = pop();
              printf("\nthe element is %d",item);
              break;
              }
          
       case 3:if(isempty())
             {
              printf("\nthe stack is empty ");
              break;
             }
              else
             {
              display();
              break;
             }
       case 4:if(!isempty())
              {
                item = peek();
                printf("\nthe element is %d",item);
              break;
              }
              else
               printf("\nthe stack is empty ");
       default:printf("\nyou have entered a error operation");
     }
    }while(o!=5);
 } 
        
void push(int a)
{
  s[top]=a;
  top=top+1;
}
int pop()
{
   int a;
   top= top-1;
   a=s[top];
   return a;
}
void display()
{
   int i;
   printf("\nthe element in the stack are");
   for(i=top-1;i>=0;i--)
   printf("%d ",s[i]);
}
int peek()
{
  int a;
   a=s[top-1];
   return a;
}
int isfull()
{
  if(top==n)
    return 1;
  else
    return 0;
}
int isempty()
{
  if(top==0)
    return 1;
  else
    return 0;
}  
   
 

 
                  


