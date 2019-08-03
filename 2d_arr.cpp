#include<iostream>
using namespace std;
int main(int args, char *argv[])
{
	int r=atoi(argv[1]),c=atoi(argv[2]);
	int arr[r][c];
	int *ptr;
	int x=3;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{

			arr[i][j]=atoi(argv[x]);
			x++;
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<arr[i][j]<" ";
		}
		cout<<endl;
	}
	return 0;
}

