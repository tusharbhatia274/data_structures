#include<iostream>
#include<cstdlib>
using namespace std;
void selsort(int arr[], int n);
int main()
{
	int n;
	cout<<"Enter the no. of elements :";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selsort(arr,n);
	return 0;
}
void selsort(int arr[], int n)
{
	int min=0,temp=0,pos=0;
	for(int i=0;i<n-1;i++)
	{
		min=arr[i];
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				pos=j;
			}
		}
		if(arr[i]>min)
		{
			temp=arr[i];
			arr[i]=arr[pos];
			arr[pos]=temp;
		}
	}
	cout<<"Elements after Selection Sort are :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
