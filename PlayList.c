#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	char data[100];
	struct Node*next;
};
struct Node*head=NULL;
void likedsongs(char *data)
{
	struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
	strcpy(newNode->data,data);
	newNode->next=head;
	head=newNode;
}
int search(char *song)
{
	struct Node*temp=head;
	while(temp!=NULL)
	{
	if(strcmp(temp->data,song)==0)
	{
	return 1;
	}
	temp=temp->next;
	}
	return 0;
}	 
void display()
{
	struct Node*temp=head;
	while(temp!=NULL)
	{
	printf("%s",temp->data);
	temp=temp->next;
	}
	printf("\n");
}
int main()
{
	char song[100];
	while(1)
	{
		int choice;
		printf("1.Add this song to the likedsongs   2.Search the song\n");
		printf("Enter the choice: ");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			printf("Enter the song to add: ");
			scanf("%s",song);
			likedsongs(song);
			display();
			break;
		case 2: 
			printf("Enter the song to search: ");
			scanf("%s",song);
			if(search(song)==1)
			{
				printf("song is present");
			}
			else
			{
				printf("NOT PRESENT");
			}
			display();
			break;
		default:
			printf("Invalid choice");
			break;
			}
			}
			
	return 0;
}	