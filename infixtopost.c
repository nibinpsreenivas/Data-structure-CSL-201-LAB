#include <stdio.h>
#define max 100
char ar[max];
int top=0;
int isfull()
{
  if(top==max)
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
void push(char c)
{
  if(!isfull())
    ar[top++]=c;
}
void displaystack()
{
  int i;
  printf("\t stack: ");
  for(i=0;i<top;i++)
   printf("%c",ar[i]);
}
void displaypost(char a[],int k)
 {
   int i;
   printf("\t postfix: ");
   for(i=0;i<k;i++)
    printf("%c",a[i]);   
 }
char peek()
{
  return(ar[top-1]);
}
char pop()
{
  return(ar[--top]);
}
int intopre(char c)
{
    switch(c)
    {
            case '-':
            case '+':return(1);break;
            case '*':
            case '/':return(3);break;
            case '^':return(6);break;
    }
}
int topre(char c)
{
  switch(c)
  {
            case '-':
            case '+':return(2);break;
            case '*':
            case '/':return(4);break;
            case '^':return(5);break;
            case '(':return(0);break;
   }
}

  
   
  
int main()
{
    int i,j=0;
    char ex[50],post[50],token ,c;
    printf("enter the infix expression888888");
    scanf("%[^\n]",ex);
    for(i=0;ex[i]!='\0';i++)
     {  
        token = ex[i];
        switch(token)
         {
            case '(': push(token);break;
            case ')':
                       while((c =pop())!='(')
                        post[j++]=c;
                        break;
                     
            case '-':
                       
            case '+':
                       
                      
            case '*':
                       
                      
            case '/':
                       
                      
            case '^': 
                       while(!isempty() && (topre(peek())>intopre(token)))
                           post[j++] = pop();
                        push(token);    
                        break;
                      
            default :post[j++] = token;break;
          }
        
        printf("\ntoken :%c",token);
    
        displaystack();
        displaypost(post,j);
      }
        while(!isempty())
           post[j++]=pop();
      post[j] ='\0';
      printf("\n postfix:%s\n", post);
      return 0;
}

