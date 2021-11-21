//Reversing Queue using stack

#include<stdio.h>
#include<stdlib.h>

int f = -1,r = -1;
int q[50];
void enqueue(int data,int l)//Enqueue for inserting data
{
	if(r==l-1){
		printf("Queue is full");
	}
	else if((f==-1)&&(r==-1)){
		f = r = 0;
		q[r] = data;
	}
	else
	{
		r++;
		q[r] = data;	
	}
}
void print()//Print function for printing the data
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("\n%d",q[i]);
	}
}
void reverse()//reverse function for reversing the data
{
	int i,j,t;
	for(i=f,j=r;i<j;i++,j--){
		t = q[i];
		q[i] = q[j];
		q[j] = t;
	}
}
void main()
{
	int n,i=0,t;
	printf("Enter the size of Queue");
	scanf("%d",&n);
	printf("\nEnter the data for Queue");
	while(i<n){
		scanf("%d",&t);
		enqueue(t,n);
		i++;
	}
	printf("\nQueue which you have entered:-");
	print();
	reverse();
	printf("\nQueue after reversing:-");
	print();
	
}


/*
	OUTPUT:

Enter the size of Queue4

Enter the data for Queue1
2
3
4

Queue which you have entered:-
1
2
3
4
Queue after reversing:-
4
3
2
1
--------------------------------
Process exited after 26.02 seconds with return value 3
Press any key to continue . . .


*/
