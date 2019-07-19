#include<stdio.h>
#include<stdlib.h>
int main(int args,char *argv[])
{
	int arr[args-1],temp=0;
	for(int i=0;i<(args-1);i++)
	{
		arr[i]=atoi(argv[i+1]);
	}
	int mid=args/2;
	int k=args-2;
	for(int i=0;i<mid;i++)
	{
		temp=arr[i];
		arr[i]=arr[k-i];
		arr[k-i]=temp;
	}
	printf("Reverse of the array is : ");
	for(int i=0;i<(args-1);i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

