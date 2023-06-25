#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;
    int sum=A+B;
    int sub=A-B;
    int mul=A*B;
  
    if(S=='*' && Q=='=')
    {
        if(A*B==C)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<mul;
        }
    }
    else if(S=='+' && Q=='=')
    {
        if(A+B==C)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<sum;
        }
    }
    else if(S=='-' && Q=='=')
    {
        if(A-B==C)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<sub;
        }
    }
    return 0;
}