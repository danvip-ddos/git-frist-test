#include <bits/stdc++.h>
using namespace std;

void Try(int arr[], int n, int k){
    cout<<'[';
    for(int i(0);i<n-k-1;i++){
        //int temp(arr[i]);
        arr[i]+=arr[i+1];
        if(i!=n-k-2) cout<<arr[i]<<' ';
        else cout<<arr[i]<<"]\n";
    }
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i(0);i<n;i++) cin>>arr[i]; 

        cout<<'[';
        for(int i(0);i<n-1;i++) cout<<arr[i]<<' ';
        cout<<arr[n-1]<<"]\n";
        
        for(int i(0);i<n-1;i++) Try(arr,n,i);
    }
}