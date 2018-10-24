#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,n,c,r,g;
    string s;
    cin>>t;
    while(t>0)
    {
    	
        cin>>n;
        r=n%12;
        if(r==1) 
		g=n+11;
		else if(r==0)
		g=n-11;
		else if(r==2)
		g=n+9;
		else if(r==11)
		g=n-9;
		else if(r==3)
		g=n+7;
		else if(r==10)
		g=n-7;
		else if(r==4)
		g=n+5;
		else if(r==9)
		g=n-5;
		else if(r==5)
		g=n+3;
		else if(r==8)
		g=n-3;
		else if(r==6)
		g=n+1;
		else if(r==7)
		g=n-1;
		
        if(g==1 || g==6 || g==7 || g==12 )
        s="WS";
        else if(g==2 || g==5 || g==8 || g==11 ) 
        s="MS";
        else if(g==3 || g==4 || g==9 || g==10 )
        s="AS";
        if(g%12==0)
        s="WS";
        else if(g%12==1)
        s="WS";
        else
        {
            c=g%12;
            if(c==7)
            s="WS";
            else if(c%3==2)
            s="MS";
            else if(c%3==0 && c%2==0)
            s="WS";
            else  if(c%3==0 || c%3==1)
            s="AS";
        }
        cout<<g<<"\t"<<s<<endl;
        
   t--; }
    return 0;
}
