#include<bits/stdc++.h>
using namespace std;
int main()
{

    stack<string>s1,s2;
    int n,i;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        for(i=0;s[i]!='/0';i++)
        {
            if(s[i]=='[' || s[i]=='(' || s[i]='{')
                s1.push(s[i]);
            else
            {
                while(!s1.isEmpty()){
                if(s[i]==')' && s1.top()=='(' || s[i]==']' && s1.top()=='['|| s[i]=='}' && s1.top()=='{'  )
                    s1.pop();
                if(s1.isEmpty()){
                    cout<<"Yes"<<endl;
                break;
                }
                else
                    cout<<"No"<<endl;

                }

            }
        }
    }
    return 0;
}
