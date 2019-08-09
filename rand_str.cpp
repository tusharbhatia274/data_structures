#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<time.h>
using namespace std;
void random(int n);
int main(int args, char *argv[])
{
	int n=atoi(argv[args-1]);
	random(n);
	return 0;
}
void random(int n)
{
	string str="";
	srand(time(NULL));
	for(int i=0;i<n;i)
	{
		int x=rand()%200;
		if((x>=65 && x<=91)||(x>=97 && x<=122))
		{
			i++;
			char ch=x;
			str=str+ch;
		}
	}
	cout<<str;
}
