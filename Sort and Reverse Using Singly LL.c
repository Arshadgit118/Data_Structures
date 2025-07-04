/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
void insertAtEnd(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else
    {
         struct Node*temp=head;
        while(temp->next!=NULL)
       {
        temp=temp->next;
       }
       temp->next=newNode;
}
}
void sort(int n)
{
    for(int i=0;i<n;i++)
    {
    struct Node*temp=head;
    while(temp->next!=NULL)
    {
    if((temp->data)>(temp->next->data))
    {
        int t=temp->data;
        temp->data=temp->next->data;
        temp->next->data=t;
    }
    temp=temp->next;
    }
   }
}
void reverse(int n)
{
    struct Node*temp1=head;
    for(int i=0;i<n/2;i++)
    {
        struct Node*temp2=head;
        for(int j=0;j<n-1-i;j++)
        {
            temp2=temp2->next;
        }
        int t=temp1->data;
        temp1->data=temp2->data;
        temp2->data=t;
        temp1=temp1->next;
    }
}
void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void create(int n)
{
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        insertAtEnd(x);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    create(n);
    display();
    sort(n);
    display();
    reverse(n);
    display();
    return 0;
    
}
    
    
    
    
    