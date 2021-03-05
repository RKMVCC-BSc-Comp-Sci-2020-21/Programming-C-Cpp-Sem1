//CODED BY SUMIT SAHA.STUDENT OF RKMVCC.
# include<iostream>
# include <stdlib.h>
using namespace std ;
struct node{
    int data;
    struct node *link;
};

 struct node *addatend(struct node *ptr,int num)
{
 struct node *temp = (struct node*)malloc(sizeof(struct node));
 temp->data=num;
  temp->link=NULL;
  ptr->link=temp;
return temp ;
}
 struct node *print(struct node *ptr)
 {

     struct node *temp1;
     temp1=ptr;
     cout<<"|"<<temp1->data<<"  "<<temp1->link<<"|"<<"  ->   ";
     temp1=temp1->link;
     return temp1;
 }

int main()
{
    struct node *head =(struct node*) malloc(sizeof (struct node));
    int num ;
    cout<<"ENTER THE ELEMENTS YOU WANT TO SEE IN THE FIBONACCI SERIES"<<endl;
    cin>>num;
    int a,i;
   a=0;
   int b=1;
    int c;
   head->data=a;
    head->link=NULL;
    struct node *ptr = NULL;
    ptr=head;
    for(i=0;i<num;i++)
    {
      c=a+b;
      a=b;
      b=c;
      if(i==0)
      {
          ptr=addatend(ptr,b);
      }
      else
      {
    ptr=addatend(ptr,c);
    }
    }
    ptr=head;
    cout<<"         "<<"NODES:-"<<"    "<<endl;
    for(i=0;i<num;i++)
    {
    ptr=print(ptr);
    }
    cout<<" | "<<ptr->data<<"  "<<ptr->link<<" | ";
    cout<<endl<<endl;
    ptr=NULL;
    return 0;
}
