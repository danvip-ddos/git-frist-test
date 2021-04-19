#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

int findZezo(vector<long long> arr, int n){
    int l(0),r(n-1),res(-1);
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]) r=mid-1;
        else {
            res=mid;
            l=mid+1;
        } 
    }
    return res;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <long long> arr(n);
        for(int i(0);i<n;i++) cin>>arr[i]; 

        int ans= findZezo(arr,n)+1;
        cout<<ans<<'\n'; 
        arr.clear();                                                
    }

}
