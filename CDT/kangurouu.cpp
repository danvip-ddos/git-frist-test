#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    sort(arr,arr+n);

    int l(0),r(n/2),hide(0);
    for(int j(r);j<n;j++) {
        if(l<=n/2){
            if(arr[j]>=arr[l]*2) { hide++; l++; }
        }
    }
    cout<<n-hide<<'\n';    
    }
}
/*
    1 2 5 6 7 9
*/