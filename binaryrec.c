#include <stdio.h>
void input(int n ,int a[]);
int bs(int n ,int a[],int e,int first,int last);

void main()
{
   int n, a[10],e,pos,first,last;
   printf("how many the elements\n");
   scanf("%d",&n);
   printf("enter the elements in sorted order\n");
   input(n,a);
   printf("enter the elements to be search\n");
   scanf("%d",&e);
   pos = bs(n,a,e,first=0,last=n-1);
   if(pos==0)
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
int bs(int n ,int a[],int e,int first,int last)
{
   int mid;
    while(first<=last)
    {
        mid = (first+last) /2 ;
          if(a[mid]==e)
             return mid+1;
          else if(a[mid]>e)
            {
             last=mid-1;
              return bs(n,a,e,first,last);
            }
          else
            {
             first=mid+1;
             return bs(n,a,e,first,last);
            }
    } 
return 0;
}
