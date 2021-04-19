#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        int arr[n]; for(int i(0);i<n;i++) cin>>arr[i];
        sort(arr,arr+n); int limit(0);
        long long dyn[k+1]; dyn[0] = 1;
        for(int i(1);i<=k;i++){
            dyn[i] = 0;
            if(i==arr[limit]) limit++;
            for(int j(0);j<limit;j++) dyn[i]= (dyn[i]+ dyn[i-arr[j]])% mod ;
        }
        
        long long ans(dyn[k]);
        cout<<ans<<'\n';
    }
}
