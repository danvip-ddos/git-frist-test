#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <long long> arr(n);
        for(int i(0);i<n;i++) cin>>arr[i]; 
        sort(arr.begin(),arr.end());

        long long ans(-1);
        for(int i(0);i<n-1;i++) {
            long long x; cin>>x;
            if(ans>=0);
            else {
                if(arr[i]!=x) ans=arr[i];
            }
        }
        if(ans<0) ans=arr[n-1];
        cout<<ans<<'\n';                                                 
    }

}
