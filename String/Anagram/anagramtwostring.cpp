#include<iostream>
#include<string.h>
using namespace std;
void swap(char *a,char *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
 int perm(char *a,char *b,int f,int l)
{   
	if(f==l)
	{  		
			cout<<a<<endl;	
}

	else
	{
		for(int i=f;i<=l;i++)
		{
			swap((a+f),(a+i));
			perm(a,b,f+1,l);
			swap((a+f),(a+i));//backtracking
		}
	}
	
	
}
int main()
{
	char a[1000],b[1000];
//	string a,b;
	
	cin>>a;
	cin>>b;
	
	int n=strlen(a);

	
	perm(a,b,0,n-1);

	return 0;
}
