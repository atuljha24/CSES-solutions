#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    /*int t;
    cin>>t;
    while(t--)*/
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
    	
    	
    	if(n%2==0){
    		n/=2;cout<<n<<" ";}
    		
    	else if(n%2!=0){
    		n=n*3+1;cout<<n<<" ";
    		
    	}}
    }
