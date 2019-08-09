#include<stdio.h>
#include<stdlib.h>
int main(int args,char* argv[]){
	int arr[args-1];
	for(int i=0;i<(args-1);i++){
		arr[i]=atoi(argv[i+1]);
	}
	int l=lcm(arr,args-1);
	printf("LCM is %d",l);
	return 0;
}
int lcm(int arr[],int n){
	int x=0,count=0;
	for(int i=arr[0];i<10000;i=i+arr[0]){
		for(int j=0;j<n;j++){
			if(i%arr[j]==0){
				count++;
			}
		}
		if(count==n)
		{
			x=i;
			break;
		}
		count=0;
	}
	return x;
}
