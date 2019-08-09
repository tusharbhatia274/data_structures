#include<stdio.h>
#include<stdlib.h>
int main(int args,char* argv[]){
	int arr[args-1];
	for(int i=0;i<(args-1);i++){
		arr[i]=atoi(argv[i+1]);
	}
	largest_array(arr,args-1);
	return 0;
}
void largest_array(int arr[],int n){
	int temp=0,sum=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i;j++){
			for(int k=j;k<j+i+1;k++){
				printf("%d ",arr[k]);
				sum=sum+arr[k];
			}
			printf("\n");
			if(sum>temp){
				temp=sum;
			}
			sum=0;
		}
	}
	printf("Largest Sum is %d",temp);
}
