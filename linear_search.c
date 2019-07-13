#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter the no. of elements :");
scanf("%d",&n);
int arr[n];
printf("Enter the elements");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int x;
printf("Enter the element to be searched :");
scanf("%d",&x);
for(int i=0;i<n;i++)
{
if(arr[i]==x)
{
printf("Position =  %d ",i+1);
}
}
return 0;
}

