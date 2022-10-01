#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int X;
    cin>>X;
    long long int K=X%10;
    if(K==0)
    {
        cout<<X/10;
    }
    else if(X<0)
    {
         K=X/10;
         cout<<K-1;
    }
    else
    {
        K=X/10;
        cout<<K;
    }
}