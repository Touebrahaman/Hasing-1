#include<stdio.h>
#define size 7
void insert(int);
void init();
void print();
void del(int);
void search(int);
int arr[size];
int main()
{
	init();
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	insert(70);
	insert(80);
	insert(90);
	print();
	search(40);
	search(50);
	del(10);
	del(30);
	del(70);
	print();
	return 0;
	
}
void init()
{
	int i;
	for(i=0;i<size;i++)
	{
		arr[i]=-1;
	}
}
void insert(int value)
{
	int key;
	key=value%size;
	if(arr[key]==-1)
	{
		arr[key]=value;
		printf("%d is inserted at location %d\n",value,key);
	}
	else
	{
		printf("%d not inserted because colision at location %d\n",value,key);
	}
}
void print()
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void del(int value)
{
	int key;
	key=value%size;
	if(arr[key]==value)
	{
		printf("%d deleted\n",value);
		arr[key]=-1;
	}
	else
	{
		printf("%d not found that's why not deleted'\n",value);
	}
}
void search(int value)
{
	int key;
	key=value%size;
	if(arr[key]==value)
	{
		printf("%d found\n",value);
		
	}
	else
	{
		printf("%d not found\n",value);
	}
}
