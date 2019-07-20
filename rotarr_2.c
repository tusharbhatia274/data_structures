#include<stdio.h>
#include<stdlib.h>
int main(int args,char *argv[])
{
	int arr[args-2];
	for(int i=0;i<(args-2);i++)
	{
		arr[i]=atoi(argv[i+1]);
		printf("%d  ",arr[i]);
	}
	int n=atoi(argv[args-1]);
	int temp;
	for(int i=0;i<n;i++)
	{
		temp=arr[args-3];
		for(int j=(args-3);j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	printf("\nArray after %d right rotations : ",n);
	for(int i=0;i<(args-2);i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}



