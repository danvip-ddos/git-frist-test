#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
int solve(int n,int k){
    int large(0),low(0);
    int arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    sort(arr,arr+n);

    int tem; if(k<=n/2) tem=k;
                else tem=n-k;
    for(int i(0);i<tem;i++) low+=arr[i];
    for(int i(tem);i<n;i++) large+=arr[i];

    return large-low;
}
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<solve(n,k)<<'\n';
    }
}
