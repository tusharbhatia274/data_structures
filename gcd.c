#include<stdio.h>
#include<stdlib.h>
int main(int args, char *argv[])
{
	int arr[args-1];
	int gcd,pos;
	int min=atoi(argv[1]);
	printf("The elements entered are : ");
	for(int i=0;i<(args-1);i++)
	{
		arr[i]=atoi(argv[i+1]);
		printf("%d ",arr[i]);
		if(arr[i]<min)
		{
			min=arr[i];
			pos=i;
		}
	}
	int c=pos;
	int j=1;
	while(j<=arr[pos] && arr[c]%j==0)
	{
		gcd=j;
		j++;
	}
	printf("\nGCD is : %d",gcd);
	return 0;
}

