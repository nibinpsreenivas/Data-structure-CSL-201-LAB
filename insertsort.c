#include <stdio.h>
void input(int n ,int a[]);
void insert(int n ,int a[]);
void display(int n, int a[]);

int main()
{
   int n, a[10];
   printf("how many the elements\n");
   scanf("%d",&n);
   printf("enter the elements\n");
   input(n,a);
   insert(n,a);
   display(n,a);
}

void input(int n ,int a[])
{
  int i;
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
}
void insert(int n ,int a[])
{
   int key,p,j;
   for(p=1;p<n;p++)
  {
     key=a[p];
    for(j=p-1;j>=0&&key<a[j];j--)
        a[j+1]=a[j];
      a[j+1]=key;
   }
} 
void display(int n, int a[])
{
  int i;
   for(i=0;i<n;i++)
     printf("%d ",a[i]);
}

