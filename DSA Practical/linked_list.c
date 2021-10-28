#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node *head;
void insertAtBegin(int data)
{
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
	printf("Element inserted at beginning is:%d\n",newNode->info);
	
}
void insertAtEnd(int data)
{
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	if(head==NULL)
	{
		head=newNode;
	}
	else 
	{
		struct node * temp=head;
	    while(temp->next!=NULL)
	    {
		temp=temp->next;
      	}	
		temp->next=newNode;  	
	}
	
	newNode->next=NULL;
	printf("Element inserted at end is:%d\n",newNode->info);
}
void insertAtPosition(int data)
{
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	int pos;
	printf("Enter the position at which you want to insert a new node\n");
	scanf("%d",&pos); 
	if(pos==1)
	{
		insertAtBegin(data);
	}
	else
	{
		struct node * temp=head;
	    int i;
	    for(i=1;i<pos-1;i++)
	    {
		  temp=temp->next;
	    }
	    newNode->next=temp->next;
     	temp->next=newNode; 
	    printf("Element inserted at %d position is:%d\n",pos,newNode->info);	
	}
	
}
void insertAfterNode(int data)
{
	int value,flag=0;
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	struct node * temp=head;
	printf("Enter a value of node after which you want to insert a new node\n");
	scanf("%d",&value);
	while(temp!=NULL)
	{
		if(temp->info==value)
		{
			flag=1;
			break;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		printf("Node is not found\n");
	}
	else
	{  
	  newNode->next=temp->next;
	  temp->next=newNode;	
	  printf("Element inserted after node %d is:%d\n",value,newNode->info); 
    }
}
void deleteAtBegin()
{
	struct node * temp= head;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("Element deleted at beginning is:%d\n",head->info);
		head=head->next;
		free(temp);
	}	
}
void deleteAtPosition()
{
	struct node * temp= head,* prev;
	
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		int pos,i;
		printf("Enter the position at which you want to delete a node\n");
		scanf("%d",&pos);
		if(pos==1)
		{
			deleteAtBegin();		
		}
		else
		{
			for(i=1;i<pos;i++)
		    {
			  prev=temp;
			  temp=temp->next;
		    }
		    printf("Element deleted at position %d is:%d\n",pos,temp->info);
		    prev->next=temp->next;
		    free(temp);
		}
	}	
}
void deleteAtEnd()
{
	struct node * temp=head,* prev;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(temp->next!=NULL)
	    {
		  prev=temp;
		  temp=temp->next;
	    }
	printf("Element deleted is:%d\n",temp->info);
	prev->next=NULL;
	free(temp);		
	}	
}
void traverse()
{
	struct node * temp=head;
	printf("The elements of linked list are: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->info);
		temp=temp->next;
	}
	printf("\n");
}
void search()
{
	struct node * temp=head;
	int key,i=0,flag=0;
	printf("Enter value of node which you want to search\n");
	scanf("%d",&key);
	while("temp!=NULL")
	{
		i=i+1;
		if(temp->info==key)
		{
			
			flag=1;
			break;
		}
		temp=temp->next;
	}
	if(flag==1)
		printf("%d was found at position %d\n",key,i);
	else
		printf("%d was not found\n",key);	
}

void main()
{
	insertAtBegin(10);
	insertAtBegin(20);
	insertAtPosition(15);
	insertAtEnd(25);
	traverse();
	insertAfterNode(30);
	traverse();
	deleteAtBegin();
	traverse();
	deleteAtEnd();
	traverse();
	deleteAtPosition();
	traverse();
	
}
