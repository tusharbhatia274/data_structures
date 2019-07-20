#include<stdio.h>
#include<stdlib.h>
int main(int args, char *argv[])
{
	int arr[args-1];
	int flag=0,gcd=1;
	printf("The elements entered are : ");
	for(int i=0;i<(args-1);i++)
	{
		arr[i]=atoi(argv[i+1]);
		printf("%d ",arr[i]);
	}
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
	printf("\nGCD is : %d",gcd);
	return 0;
}

