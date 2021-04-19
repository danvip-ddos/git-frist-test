#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

int findNum(vector<int> arr, int n,int num){
    int l(0),r(n-1);
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==num) return mid+1;
        else if(arr[mid]<num) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector <int> arr(n);
        for(int i(0);i<n;i++) cin>>arr[i]; 

        int ans= findNum(arr,n,k);
        if(ans>0) cout<<ans<<'\n'; 
        else cout<<"NO\n";
        arr.clear();                                                
    }

}
