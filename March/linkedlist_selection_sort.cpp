# include<iostream>
# include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};
struct node *addatend(struct node *ptr,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    ptr=ptr->link;
    return ptr;
}
struct node *selectionsort(struct node *ptr,struct node *temp1)
{
  int temp2;
    while (temp1!=NULL)
    {
         ptr=ptr->link;
         while(ptr!=NULL)
         {
             if(ptr->data<temp1->data)
             {
                 temp2=temp1->data;
                 temp1->data=ptr->data;
                 ptr->data=temp2;
             }
            ptr=ptr->link;
         }
         temp1=temp1->link;
         ptr=temp1;

    }
return temp1;
}
struct node *print(struct node *ptr)
{
    cout<<ptr->data<<"  ";
    ptr=ptr->link;

    return ptr;
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=NULL;
    head->link=NULL;
    struct node *ptr = NULL;
    int i;
    ptr=head;
    int num;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER"<<endl;
    cin>>num;
    cout<<"ENTER THE NUMBERS"<<endl;
    int data;
     for(i=0;i<num;i++)
        {
         cin>>data;
         if(i==0)
             head->data=data;
         else
         ptr=addatend(ptr,data);
     }
     ptr=head;
     struct node *temp = head;

     ptr=selectionsort(ptr,temp);

ptr=head->link;
 for(i=0;i<num;i++)
 {
     if(i==0)
         head=print(head);
     else
     ptr=print(ptr);
 }
    return 0;
}
