//singly linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}
*head,*tail,*temp,*t;
void createlink(int n);
void insertbeg();
void insertmid();
void insertend();
void deletebeg();
void deletemid();
void deleteend();
void traverse();

int main()
{
	int i;
	while(1)
	{
		int n;
		printf("\n 1.For creating linked list \n 2.Insertion at begining \n 3.Insertion at middle \n 4.Insertion at end \n 5.Deletion at begining \n 6.Deletion at middle \n 7.Deletion at end \n 8.End \n ");
		printf("\nEnter your choice:");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("Enter no. of elements required:");
				scanf("%d",&n);
				createlink(n);
                		traverse();
				break;
			case 2:
				insertbeg();
				traverse();
				break;
			case 3:
				insertmid();
				traverse();
				break;
			case 4:
				insertend();
				traverse();
				break;
			case 5:
				deletebeg();
				traverse();
				break;
			case 6:
				deletemid();
				traverse();
				break;
			case 7:
				deleteend();
				traverse();
				break;
			case 8:
				exit(0);
		}

	}
	return 0;
}


void createnode(void)
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
}
void createlink(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		createnode();
		if(head==NULL)
		{
			head=temp;
			tail=head;
		}
		else
		{
			tail->next=temp;
			tail=tail->next;
		}
	}
}
void traverse(void)
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
void insertbeg(void)
{
	createnode();
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
void insertmid(void)
{
	int x;
	printf("Enter the data in the node to insert after:");
	scanf("%d",&x);
	t=head;
	while(t->data!=x)
	{
		t=t->next;
	}
	if(t->data==x)
	{
		createnode();
		temp->next=t->next;
		t->next=temp;
	}
}
void insertend(void)
{
	createnode();
	tail->next=temp;
}
void deletebeg(void)
{
	temp=head;
	head=head->next;
	free(temp);
}
void deletemid(void)
{
	int a;
	printf("Enter data to be deleted:");
	scanf("%d",&a);
	temp=head;
	while(temp->data!=a)
	{
		t=temp;
		temp=temp->next;
	}
	t->next=temp->next;
	free(temp);
}
void deleteend(void)
{
	if(head==NULL)
	{
		printf("There is no linked list");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			t=temp;
			temp=temp->next;
		}
		t->next=NULL;
		free(temp);
	}
}

/*
OUTPUT:

 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:1
Enter no. of elements required:4
Enter data:2
Enter data:3
Enter data:4
Enter data:5
2->3->4->5->
 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:2
Enter data:1
1->2->3->4->5->
 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:3
Enter the data in the node to insert after:2
Enter data:20
1->2->20->3->4->5->
 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:4
Enter data:50
1->2->20->3->4->5->50->
 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:5
2->20->3->4->5->50->
 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:6
Enter data to be deleted:20
2->3->4->5->50->
 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:7
2->3->4->5->
 1.For creating linked list 
 2.Insertion at begining 
 3.Insertion at middle 
 4.Insertion at end 
 5.Deletion at begining 
 6.Deletion at middle 
 7.Deletion at end 
 8.End 
 
Enter your choice:8
*/
