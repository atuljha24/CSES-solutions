#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
if(n==1){
    cout<<n;}

else if(n<4 &&n!=1){
    cout<<"NO SOLUTION";
}
else{
for(int i=0;i<n;i+=2){
    cout<<i+1<<" ";
    
}
if(n%2==0){for(int i=n;i>1;i-=2 ){
    
    cout<<i<<" ";
}}
else if(n%2!=0){for(int i=n-1;i>1;i-=2 ){
    
    cout<<i<<" ";
}}}}
    



    