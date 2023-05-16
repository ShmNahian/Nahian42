#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    char S,Q='=';
    cin>>A>>S>>B>>Q>>C;
    if((A+B==C)||(A-B==C)||(A*B==C))
        cout<<"Yes"<<endl;
    else
    {
        if(S=='+')
            cout<<A+B<<endl;
        else if(S=='-')
            cout<<A-B<<endl;
        else if(S=='*')
            cout<<A*B<<endl;
    }
}

