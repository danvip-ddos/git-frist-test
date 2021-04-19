#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n],dyn[n];
        for(int i(0);i<n;i++) cin>>arr[i];


        int res(arr[0]); dyn[0]=arr[0];
        for(int i(1);i<n;i++) {
            dyn[i]=arr[i];
            for(int j(0);j<i;j++) if(arr[i]>arr[j]) dyn[i]=max(dyn[j]+arr[i],dyn[i]);
            res=max(res,dyn[i]);
        }
        cout<<res<<'\n';
    }
}
