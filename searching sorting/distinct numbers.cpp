
#include <bits/stdc++.h>
using namespace std;
#define a first
#define b second
#define pb push_back
typedef long long int ll;
#define endl '\n'
int main(){
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    sort(a,a+n);
    int cnt=1;
   for(int i=1;i<n;i++){
       if(a[i]!=a[i-1]){cnt++;}
        
    }
    cout<<cnt<<endl;
}
