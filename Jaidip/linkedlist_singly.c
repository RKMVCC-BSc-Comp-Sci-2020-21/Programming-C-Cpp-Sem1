#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} * start;
void create(int);
void disp();
void count();
void ser(int);
int main()
{
    int ch, n, i, m, a, pos;
    start = NULL;
    do
    {
        printf("\n\n            MENU\n----------------------------\n");
        printf("\n1.CREATE\n");
        printf("\n2.DISPLAY\n");
        printf("\n3.COUNT\n");
        printf("\n4.SEARCH \n");
        printf("\n5.EXIT\n");
        printf("\nENTER YOUR CHOICE ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\nHOW MANY NODES U WANT TO CREATE ");
            scanf("%d", &n);
            int t1 = 0, t2 = 1;
            for (i = 0; i < n; i++)
            {
                create(t1);
                int nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
            }
            break;
        case 3:
            count();
            break;
        case 2:
            disp();
            break;
        case 4:
            printf("\nENTER THE ELEMENT FOR SEARCH ");
            scanf("%d", &m);
            ser(m);
            break;
        case 5:
            exit(0);
        }
    } while (ch != 7);
    return 0;
}
void count()
{
    struct node *q;
    int cnt = 0;
    q = start;
    while (q != NULL)
    {
        cnt++;
        q = q->link;
    }
    printf("\n\n No Of Nodes Are  %d", cnt);
}

void create(int data)

{
    struct node *q, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));

    tmp->data = data;
    tmp->link = NULL;
    if (start == NULL)
    {
        start = tmp;
    }
    else
    {
        q = start;
        while (q->link != NULL)
            q = q->link;
        q->link = tmp;
    }
}
void disp()
{
    struct node *q;
    if (start == NULL)
    {
        printf("\n\nLIST IS EMPTY");
    }
    else
    {
        q = start;
        while (q != NULL)
        {
            printf("%d-> ", q->data);
            q = q->link;
        }
        printf("NULL");
    }
}
void ser(int data)
{
    struct node *q, *tmp;
    q = start;
    while (q != NULL)
    {
        if (q->data == data)
        {
            printf("\nElement Is Found");
            break;
        }
        else
        {
            q = q->link;
        }
    }
    if (q == NULL)
    {
        printf("\nElement is Not Found");
    }
}