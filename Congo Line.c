#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*next;
};
struct Node*head=NULL;
void insertAtEnd(int data)
{
	struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	if(head==NULL)
	{
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
void deleteAtBeg()
{
	struct Node*temp=head;
	head=head->next;
	free(temp);
}
void display()
{
	struct Node*temp=head;
	while(temp!=NULL)
	{
	printf("%d",temp->data);
	temp=temp->next;
	}
	printf("\n");
}
int main()
{
        int n;
        printf("1.Get into the line for dance ||| 2.come out of the line |||");
        printf("\n");
        while(1)
        {
	int choice;
	printf("enter the choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("Enter the line:");
	scanf("%d",&n);
	if(n==-1)
	{
	break;
	}
	else
	{
		insertAtEnd(n);
		display();	
		break;
	}
	
	case 2:
	printf("come out of the line from beginning:");
	deleteAtBeg();
	display();
	break;
	
 	default:
 	printf("ENTER THE VALID CONDITION");
 	break;
 	}
 	}
 	return 0;
 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	