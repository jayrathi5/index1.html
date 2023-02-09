#include<bits/stdc++.h>
struct node
{   int data;
    struct node *next;
    struct node *prev;

}*head,*tmp,*newnode;
void indel()
{   if(head->next==0)
    {   
        head=head->next;    
        free(head);

    }
    else
    {
        tmp=head;
        head=head->next;
        head->next->prev=0;
    free(tmp);
    }



}
void betdel()
{   int i=1,pos;
    std::cout<<"enter the position:";
    std::cin>>pos;
    tmp=head;
    while(i<pos)
    {
        tmp=tmp->next;
        i++;
    }
    tmp->prev->next=tmp->next;
    tmp->next->prev=tmp->prev;
    free(tmp);
    }
void dellast()
{   tmp=head;
while(tmp->next!=0)
{   
tmp=tmp->next;
}
tmp->prev->next=0;
free(tmp);


}
void in()
{   newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

}
void bet()
{   int pos,i=1;
    std::cout<<"enter the position:";
    std::cin>>pos;
    tmp=head;
    while(i<pos)
    {
        tmp=tmp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    std::cout<<"enter the data:";
    std::cin>>newnode->data;
    newnode->next=tmp;
    tmp->prev->next=newnode;
    newnode->prev=tmp->prev;
    tmp->prev=newnode;
    

}
void last()
{   tmp=head;
    while(tmp->next!=0)
    {   tmp=tmp->next;

    }
    newnode=(struct node*)malloc(sizeof(struct node));
        std::cout<<"enter the data:";
    std::cin>>newnode->data;
    newnode->next=0;
    tmp->next=newnode;
    newnode->prev=tmp;



}
void d()
{   tmp=head;
    while(tmp!=0)
    {
        printf("%d\n",tmp->data);
        tmp=tmp->next;
    }

}
int main()
{   head=0;
int ch;
    while(ch)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    std::cout<<"enter the numnber:";
    std::cin>>newnode->data;
    newnode->next=0;
    newnode->prev=0;
    if(head==0)
    {
        head=tmp=newnode;
    }
    else{
        tmp->next=newnode;
        tmp=newnode;
    }
    std::cout<<"ch:";
    std::cin>>ch;
    }
    int c;
        do
        {
            
        printf("do you want to continue:");
scanf("%d",&c);
        switch(c)
        {
case 1:
    in();
    break;
    case 2:
    bet();
    break;
    case 3:
    last();
    break;
    case 4:
    d();
    break;
    case 5:
    indel();
    break;
    case 6:
    betdel();
    break;
    case 7:
    dellast();
    break;


        }
        }while(c!=0);

        return 0;

}