#include <stdio.h>
void input(int n ,int a[]);
int linear(int n ,int a[],int e);


void main()
{
   int n, a[10],e,pos;
   printf("how many the elements\n");
   scanf("%d",&n);
   input(n,a);
   printf("enter the elements to be search\n");
   scanf("%d",&e);
   pos = linear(n,a,e);
   if(pos<0)
   printf("element not found\n");
   else
   printf("element fount at %d\n",pos);

  
}
void input(int n ,int a[])
{
  int i;
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
}
int linear(int n ,int a[],int e)
{
  int i;
   for(i=0;i<n;i++)
     if(a[i]==e)
        return i+1;
    return -1;
}

