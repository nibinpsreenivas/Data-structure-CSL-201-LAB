#include <stdio.h>
void input(int n ,int a[]);
int selection(int n ,int a[]);
void display(int n, int a[]);
void swap(int *a,int *b);

void main()
{
   int n, a[10];
   printf("how many the elements\n");
   scanf("%d",&n);
    printf("enter the elements\n");
   input(n,a);
   selection(n,a);
   display(n,a);  
}
void input(int n ,int a[])
{
  int i;
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
}
int selection(int n ,int a[])
{
   int i,small,j,index;
  for(i=0;i<n-1;i++)
 {
   small= a[i];
   index= i;
   for(j=i+1;j<n;j++)
     if(small>a[j])
       {
        small=a[j];
        index=j;
       }
    swap(&a[i],&a[index]);
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
