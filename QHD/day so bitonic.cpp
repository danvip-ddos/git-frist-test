#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i(0);i<n;i++) cin>>arr[i];

        int inc[n],deg[n];
        for(int i(0);i<n;i++) {
            inc[i]=arr[i];
            for(int j(0);j<i;j++) if(arr[i]>arr[j]) inc[i]=max(inc[j]+arr[i],inc[i]);
        }
        for(int i(n-1);i>=0;i--) {
            deg[i]=arr[i];
            for(int j(i+1);j<n;j++) if(arr[i]>arr[j]) deg[i]=max(deg[j]+arr[i],deg[i]);
        }

        int res(0);
        for(int i(0);i<n;i++) {
            res=max(res,inc[i]+deg[i]-arr[i]);            
        }

        cout<<res<<'\n';
    }
}
