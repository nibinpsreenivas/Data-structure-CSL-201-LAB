#include<stdio.h>
#include"abc.h"
void qsort(int a[],int l,int r);
int part(int a[],int l,int r);
void swap(int *a,int *b);
void main()
{
  int n,a[50];
  printf("enter the number of elements");
  scanf("%d",&n);
  read(a,n); 
  printf("\narry before sorting\n");
  print(a,n);  
  qsort(a,0,n-1);
  printf("\narry after sorting\n");
  print(a,n);  
}


void qsort(int a[],int l,int r)
{
  int pos;
  if(l<r)
 {
   pos = part(a,l,r);
   qsort(a,l,pos-1);
    qsort(a,pos+1,r);
 }
}
int part(int a[],int l,int r)
 {
   int key = a[l],i=l+1,j=r;
   do
   {
     while(a[i]<key && i<r)
     {
       i++;
     }
     while(a[j]>key && j>l)
     {
       j--;
     }
   
     if(i<j)
     {
       swap(&a[i],&a[j]);
     }
   }while(i<j);
   swap(&a[l],&a[j]);
    return j;
     
 }
void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
     

