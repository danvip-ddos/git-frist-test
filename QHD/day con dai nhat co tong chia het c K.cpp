#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int dyn[k]; memset(dyn,0,sizeof(dyn));
        for(int i(0);i<n;i++) {
            int x; cin>>x;
            dyn[x%k]++;
        }
        int count(dyn[0]);
        for(int i(1);i<=n/2;i++) if(i==k-i) count += dyn[i]/2;
                                    else count += min(dyn[i],dyn[k-i]);
        cout<<count<<'\n';
    }
}
