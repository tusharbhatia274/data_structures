#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[50],n,x,flag=0,a,b,c;
 
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter array element(ascending order)\n");
 
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    } 
    printf("Enter the element to search:");
    scanf("%d",&x);
 
    a=0;
    b=n-1;
 
    while(a<=b)
    {
        c=(a+b)/2;
 
        if(x==arr[c]){
            flag=1;
            break;
        }
        else
            if(x>arr[c])
                a=c+1;
            else
                b=c-1;
    }
 
    if(flag==1)
        printf("\nElement found at position %d",c+1);
    else
        printf("\nElement not found");
 
    return 0;
}
