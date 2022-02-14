#include<stdio.h>
#include<malloc.h>
struct NODE
  {
    int item;
    struct NODE *link;
  } ;
typedef struct NODE node;
node *head=NULL;
node *newnode(int val)
{  node *p;
   p=(node *)malloc(sizeof(node));
   p->item=val;
   p->link=NULL;
   return p;
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

void insertfirst(int val)
{  node *p;
   p=newnode(val);
   p->link=head;
   head=p;
  
}

void insertbefore(int item1,int val)/*insert val after item1*/
{ node *curr=head,*prev=NULL,*p;
  while(curr!=NULL && curr-> item != item1)
    {prev=curr;curr=curr->link;}
  if(curr==NULL)
     printf("Item Not Found\n");
  else
      { p=newnode(val);
        p->link= curr;
        if(curr==head)/* iserting before the first node */
          head=p;
        else
          prev->link=p;
       }
}

void insertafter(int item1,int val)/*insert val before item1*/
{ node *curr=head,*p;
  while(curr!=NULL && curr-> item != item1)
    {curr=curr->link;}
  if(curr==NULL)
     printf("Item Not Found\n");
  else
       {p=newnode(val);
       p->link= curr->link;
       curr->link=p;
       }
}
void delete(int val)
{ node *curr=head,*prev=NULL,*p;
  while(curr!=NULL && curr-> item != val)
    {prev=curr;curr=curr->link;}
  if(curr==NULL)
     printf("Item Not Found\n");
  else
     {
       if(curr==head)  /* node to be deleted is the first node*/    
         head=curr->link;
       else
         prev->link=curr->link;
       free(curr);
      }
}
int main()
 {
  int ch,po,it;
    
   do
     { printf("\n1. insert first\n2. Insert after\n3. insert before\n4. display \n5. Delete \n6. quit");
       scanf("%d",&ch);
       switch(ch)
       { case 1:printf("value to be inserted first:");
                scanf("%d",&po); insertfirst(po);break;
         case 2:printf("enter item after which an element is inserted ");
                scanf("%d",&it);
                printf("value to be inserted:");
                scanf("%d",&po);insertafter(it,po);break;
	case 3:printf("enter item before which an ele is inserted");
            scanf("%d",&it);
            printf("value to be inserted:");
            scanf("%d",&po);
            insertbefore(it,po);
            break;
         case 4:displaylist(head);break;
         case 5:printf("value to be Deleted:");
                scanf("%d",&po);delete(po);break;
         case 6:break;
          default:printf("Invalid choice");
        }
    }while(ch!=6);

}
