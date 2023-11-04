#include<stdio.h>
#include<conio.h>
int main()
{
	int E,N,P,CC;S
	printf("program to find cyclomatic complexity:");
	printf("enter the number of edges in the flow graph:");
	scanf("%d",&E);
	printf("enter the number of nodes in the flow graph:");
	scanf("%d",&N);
	printf("enter the number of predicate nodes in the flow graph:");
	scanf("%d",&P);
	CC=E-N+(2*P);
	printf("the cyclomatic complexity of the flowgraph is :%d",CC);
	getch();
}