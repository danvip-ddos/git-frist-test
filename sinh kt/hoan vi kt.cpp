#include <bits/stdc++.h>
using namespace std;

int  mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i(0);i<n;i++) cin>>arr[i];

        int i(n-1);
        for(;i>0;i--) {
            if(arr[i]>arr[i-1] ){
                for(int j(n-1);j>=i;j--) if(arr[j]>arr[i-1]) {
                    swap(arr[j],arr[i-1]);
                    sort(arr+i,arr+n);
                }
                break;
            }
        }

        if(i==0) for(int j(0);j<n;j++) arr[j]=j+1;

        for(int j(0);j<n;j++) cout<<arr[j]<<' ';
        cout<<'\n';
    }
}
/*
    14325
    14352
    14523
    14532

    for(n-1) if(ai>a(i-1)) find (>a(i-1)) ;swap,sx(inc)
*/