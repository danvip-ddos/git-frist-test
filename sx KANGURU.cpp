#include <bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
    int n,count(0); cin>>n;
    int arr[n]; 
    for(int i(0);i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int r=n/2; // chia doi mang va sd tham lam
    for(int i(0);i<=n/2-1;i++){
        while(r<n){
            if(arr[i]*2<=arr[r]){
                count++;
                break;
            }
            else r++;
        }
    }
    cout<<n-count<<'\n';
    }
}