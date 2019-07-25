#include<stdio.h>
#include<stdlib.h>
int find_gcd(int, int[]);
int main(int args, char *argv[])
{
	int arr[args-1];
	printf("The elements entered are : ");
	for(int i=0;i<(args-1);i++)
	{
		arr[i]=atoi(argv[i+1]);
		printf("%d ",arr[i]);
	}
	int res=find_gcd(args,arr);
	printf("\nGCD is : %d",res);
	return 0;
}
int find_gcd(int args, int arr[])
{
	int flag=0,gcd=1;
	for(int i=1;i<=arr[0];i++)
	{
		for(int j=0;j<(args-1);j++)
		{
			if(arr[j]%i==0)
			{
				flag++;
			}
		}
		if(flag==(args-1))
		{
			gcd=i;
		}
		flag=0;
	}
	return (gcd);
}

