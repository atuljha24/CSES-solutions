#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    /*int t;
    cin>>t;
    while(t--)*/
    long long  n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n-1;i++){
        long long a;
        cin>>a;
        sum+=a;
    }
    long long missing=n*(n+1);
    cout<<missing*0.5 -sum;}