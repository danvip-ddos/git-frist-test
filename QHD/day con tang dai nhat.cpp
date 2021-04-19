#include <bits/stdc++.h>
using namespace std;


main(){
        int n; cin>>n;
        int arr[n]; for(int i(0);i<n;i++) cin>>arr[i];
        int dyn_Arr[n]; int ans=1;
        for(int i(0);i<n;i++) dyn_Arr[i]=1;
        for(int i(1);i<n;i++) {
            for(int j(i-1);j>=0;j--) if(arr[i]>arr[j]) dyn_Arr[i]=max(dyn_Arr[i],dyn_Arr[j]+1);
            ans=max(dyn_Arr[i],ans);
        }
        cout<<ans<<'\n';
}
