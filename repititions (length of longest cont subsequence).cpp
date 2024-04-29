#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    /*int t;
    cin>>t;
    while(t--)*/
    string s;
    cin>>s;
    int maxcount =INT_MIN;
    int count=1;
    if(s.size()==1){
        cout<<"1";
    }
    else{
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;
            
        }
        
        else{count=1;}
        maxcount=max(count,maxcount);
    }
    cout<<maxcount;}}

    