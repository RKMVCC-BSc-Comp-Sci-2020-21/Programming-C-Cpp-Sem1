//CODED BY SUMIT SAHA.STUDENT OF RKMVCC.
#include<iostream>
#include<stdlib.h>
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
return temp;
}
struct node *reverse(struct node *ptr)
{
   struct node *temp = NULL;
   struct node *temp1 = NULL;
   struct node *temp3 = ptr;
   while(temp3!=NULL)
    {
       temp1=temp3->link;
       temp3->link=temp;
       temp=temp3;
       temp3=temp1;
   }
     temp3=temp;
     return temp3;
}
struct node *print (struct node *ptr)
{
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->link;
        return ptr;
    }
}
int main()
{
   struct node *head=(struct node *)malloc(sizeof(struct node));
    cout<<"ENTER THE ELEMENTS"<<endl;
    head->data=NULL;
    head->link=NULL;
    struct node *ptr=NULL;
    ptr=head;
int i,data;
    for(i=0;i<10;i++)
    {
        cin>>data;
        ptr=addatend(ptr,data);
    }
     ptr=head;
     head=reverse(head);
     ptr=head;
    for(i=0;i<10;i++)
   {
    ptr=print(ptr);
    }
    return 0;
}
