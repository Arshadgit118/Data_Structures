/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node
{
    char data;
    struct Node*next;
};
struct Node*num=NULL;
struct Node*ch=NULL;
struct Node*vow=NULL;

struct Node* insertAtEnd(struct Node*head,char data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)
    return newNode;
    else
    {
        struct Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        return head;
    }
}
void display(struct Node*head)
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%c ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    FILE *f;
    f=fopen("input.txt","w+");
    char str[100];
    printf("Enter the String:\n");
    scanf("%s",str);
    fprintf(f,"%s",str);
    rewind(f);
    char c;
    while ((c=getc(f))!=EOF)
    {
        if(c>='0' && c<='9')
        {
            num=insertAtEnd(num,c);
        }
        else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            vow=insertAtEnd(vow,c);
            
        }
        else
        {
            ch=insertAtEnd(ch,c);
        }
        
    }
    display(num);
    display(ch);
    display(vow);
    
}