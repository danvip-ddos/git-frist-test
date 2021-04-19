#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

int find(long long arr[], long long num,int l, int r){
    int res(-2);
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]<=num) {
            res=mid; 
            l=mid+1;
        }
        else r=mid-1;
    }
    return res+1;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; long long k; cin>>n>>k;
        long long arr[n]; 
        for(int i(0);i<n;i++)   cin>>arr[i];
        sort(arr,arr+n);
        cout<< find(arr,k,0,n)<<'\n';
    }
}
