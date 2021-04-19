#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
int solve(int n){
    long long res(0);
    long long arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    sort(arr,arr+n);

    for(int i(0);i<n;i++){
        res=(res+(arr[i]*(long long)i)%mod)%mod;
    }
    return res;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<solve(n)<<'\n';
    }
}
