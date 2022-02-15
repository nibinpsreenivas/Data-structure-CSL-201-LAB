#include<stdio.h>
#include<malloc.h>
struct NODE
  {
    int info;
    struct NODE *link;
  } ;
typedef struct NODE node;
node *head=NULL;
node *newnode()
{  node *p;
   p=(node *)malloc(sizeof(node));
}

void displaylist(node *h)
 { 
   node *curr;
   curr=h;
   while(curr!=NULL)
   { printf("%d", curr->item);
     curr=curr->link;
     if(curr !=NULL)
       printf(" --> ");
   }
  }

void insertf(int item)
{  node *p;
   p=newnode();
   p->info=item;
   p->link=head;
   head=p;
  
}

void insertBF(int item,int a)
{ node *curr=head,*prev=NULL,*p;
  while(curr!=NULL && curr-> item != item1)
    {prev=curr;curr=curr->link;}
  if(curr==NULL)
     printf("Item Not Found\n");
  else
      { p=newnode();
         p->item=val;
        p->link= curr;
        if(curr==head)
          head=p;
        else
          prev->link=p;
       }
}

void insertafter(int item1,int val)
{ node *curr=head,*p;
  while(curr!=NULL && curr-> item != item1)
    {curr=curr->link;}
  if(curr==NULL)
     printf("Item Not Found\n");
  else
       {p=newnode();
        p->item=val;
        p->link= curr->link;
        curr->link=p;
       }
}
void delete(int val)
{ 
  node *curr=head,*prev=NULL,*p;
    while(curr!=NULL && curr-> item != val)
        {prev=curr;curr=curr->link;}
    if(curr==NULL)
       printf("Item Not Found\n");
     else
       {
          if(curr==head)  
              head=curr->link;
          else
              prev->link=curr->link;
          free(curr);
      }
}
int main()
 {
  int o,a,item;
    
   do
     { printf("\n1)insert first\n2)Insert after\n3)insert before\n4)display \n5)Delete \n6)END");
       scanf("%d",&o);
       switch(o)
       { case 1:printf("\nvalue to be inserted first:");
                scanf("%d",&a);
                insertf(a);
                break;
         case 2:printf("\nenter item to insert an other value after that value  ");
                scanf("%d",&item);
                printf("\nvalue to be inserted after %d",item);
                scanf("%d",&a);
                insertAF(iteam,a);
                break;
	case 3:printf("\nenter item to insert an other value before this item");
            scanf("%d",&item);
            printf("\nvalue to be inserted before %d",item);
            scanf("%d",&a);
            insertBF(item,a);
            break;
         case 4:display();
                break;
         case 5:printf("\nEnter the value to be Deleted");
                scanf("%d",&po);
                delete(a);
                break;
         default:printf("\nENTER A VAID CHOOSE or plz press 6 to exit");
        }
    }while(ch!=6);

}

