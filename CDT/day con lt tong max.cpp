#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int dyn[n]; cin>>dyn[0]; int ans(dyn[0]);
        for(int i(1);i<n;i++){
            int x; cin>>x;
            dyn[i]=max(dyn[i-1]+x,x);
            ans=max(ans,dyn[i]);
        }
        cout<<ans<<'\n';
    }
}
