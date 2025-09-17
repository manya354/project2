#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,i,n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient memory\n");
		return;
	}
	printf("Enter N elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("The given element are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(a+i));
	}
}
