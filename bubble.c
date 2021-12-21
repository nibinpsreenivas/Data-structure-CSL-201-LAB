#include <stdio.h>
void input(int n ,int a[]);
int bubble(int n ,int a[]);
void display(int n, int a[]);
void swap(int *a,int *b);

void main()
{
   int n, a[10];
   printf("how many the elements\n");
   scanf("%d",&n);
    printf("enter the elements\n");
   input(n,a);
   bubble(n,a);
   display(n,a);  
}
void input(int n ,int a[])
{
  int i;
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
}
int bubble(int n ,int a[])
{
   int i,j;
  for(i=0;i<n-1;i++)
 {  
     for(j=0;j<n-1-i;j++)
       if(a[j+1]<a[j])
        swap(&a[i],&a[j]);
  }
}
void display(int n, int a[])
{
  int i;
   for(i=0;i<n;i++)
     printf("%d ",a[i]);
}
void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
