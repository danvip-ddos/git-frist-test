#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long arr[n]; for(int i(0);i<n;i++) cin>>arr[i];
        long long dyn[n+1]; 
        dyn[0]=0; dyn[1]=arr[0];
        for(int i(2);i<=n;i++) {
            dyn[i]=max(dyn[i-2]+arr[i-1],dyn[i-1]);
        }
        cout<<dyn[n]<<'\n';
    }
}
