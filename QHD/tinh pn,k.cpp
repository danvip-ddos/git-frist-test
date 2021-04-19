#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        if(k>n) { cout<<"0\n"; continue;}
        long long arr[k+1]; 
        arr[0]=1;
        for(int i(1);i<=k;i++) arr[i]=(arr[i-1]*(long long)(n+1-i))%mod;
        cout<<arr[k]<<'\n';
    }  
}