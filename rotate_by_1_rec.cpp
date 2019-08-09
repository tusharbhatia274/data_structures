#include<iostream>
#include<cstdlib>
using namespace std;
void rotate(int m, int n, int row, int column, int arr[5][5]);
int main()
{
	int arr[5][5]={{1,2,3,4,5},{6,7,8,9,10,},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int n,row=0,column=0;
	cout<<"Enter the no. of rotations required :";
	cin>>n;
	while(n>0)
	{
		rotate(5,5,row,column,arr);
		n--;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
void rotate(int m, int n, int row, int column, int arr[5][5])
{
	int prev=0,curr=0;
	if(row>=m/2 || column>=n/2)
	{
		return;
	}
	else
	{
		prev=arr[row+1][column];
		for(int i=column;i<n;i++)
		{
			curr=arr[row][i];
			arr[row][i]=prev;
			prev=curr;
		}
		for(int i=row+1;i<n;i++)
		{
			curr=arr[i][n-1];
			arr[i][n-1]=prev;
			prev=curr;
			}
		for(int i=n-2;i>=column;i--)
		{
			curr=arr[m-1][i];
			arr[m-1][i]=prev;
			prev=curr;
		}
		for(int i=m-2;i>row;i--)
		{
			curr=arr[i][column];
			arr[i][column]=prev;
			prev=curr;
		}
		rotate(--m,--n,++row,++column,arr);
	}
}

