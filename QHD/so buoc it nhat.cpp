#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n]; for(int i(0);i<n;i++) cin>>arr[i];
        int dyn[n]; dyn[0]=1;
        for(int i(1);i<n;i++) {
            dyn[i]=0;
            for(int j(0);j<i;j++)
                if(arr[i]>arr[j]) dyn[i]=max(dyn[i],dyn[j]+1);
        }
        int ans=1;
        for(int i(1);i<n;i++) ans=max(ans,dyn[i]);
        cout<<n-ans<<"\n";
    }
}