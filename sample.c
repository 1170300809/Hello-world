#include<stdio.h>
#include <string.h>
#include <malloc.h>  
int n_j(int n); 
typedef struct node
{
	int member;
	struct node *p;
}Node;
int main()
{
	Node a,b;
	a.p=&b;
	b.p=NULL;
	printf("node b's member is %d\n",a.p->member);
	char Word_first[20]="Hello World!";
	char Word_second[20]="Goodbye World!";
	int flag=1;
	int i,sum=0;
	flag=strcmp(Word_first,Word_second);
	if(flag==0)
	printf("Word_first is Equal with Word_second!\n");
	else printf("Word_first is Not Equal with Word_second!\n");
	for(i=0;i<3;i++)
	{
		sum+=i;
	}
	printf("sum is %d\n",sum);
	
	printf("5! is %d",n_j(5));
}
int n_j(int n)
{
	if(n==0||n==1)
	return 1;
	else 
	return n*n_j(n-1);
}
