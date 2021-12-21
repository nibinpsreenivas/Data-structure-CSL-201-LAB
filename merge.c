#include<stdio.h>
void read(int a[],int n);
void merge_sort(int a[],int first,int last);
void simple_merge(int a[],int first,int mid,int last);
void print(int a[],int n);

void main()
{
  int n,a[50];
  printf("enter the number of elements");
  scanf("%d",&n);
  read(a,n); 
  printf("\narry before sorting\n");
  print(a,n);  
  merge_sort(a,0,n-1);
  printf("\narry after sorting\n");
  print(a,n);  
}

void read(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
       scanf("%d",&a[i]);
}
void merge_sort(int a[],int first,int last)
{
  
  if(first<last)
  {
   int mid= (first+last)/2;
   merge_sort(a,first,mid);
   merge_sort(a,mid+1,last);
   simple_merge(a,first,mid+1,last);
  }
}
void simple_merge(int a[],int first,int mid,int last)
 {
   int i=first,j=mid,k=0,temp[100];
  
  while(i<mid && j<=last)
  {
   if(a[i]<a[j])
      temp[k++] = a[i++];
   else
      temp[k++] = a[j++];
   } 
   while(i<mid)
     temp[k++] = a[i++];
   
    while(j<=last)
     temp[k++] = a[j++];
  for(i=first,j=0;j<k;)
     a[i++]=temp[j++];
 }
void print(int a[],int n)
{
  int i;

  for(i=0;i<n;i++)
       printf("%d ",a[i]);
}
 
     

