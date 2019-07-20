#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int arr[argc-1];
for(int i=0;i<(argc-1);i++)
{
	arr[i]=atoi(argv[i+1]);
}
int pos=(argc-1)/2;
int temp=arr[pos-1];
for(int i=(pos-1);i>0;i--)
{
	arr[i]=arr[i-1];
}
arr[0]=temp;
int temp1=arr[pos];
for(int i=pos;i<(argc-1);i++)
{
	arr[i]=arr[i+1];
}
arr[argc-2]=temp1;
for(int i=0;i<(argc-1);i++)
{
	printf("%d ",arr[i]);
}
return 0;
}

