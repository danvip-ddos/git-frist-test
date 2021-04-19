#include <bits/stdc++.h>
using namespace std;

main(){
    int n; cin>>n;
    int arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    for(int i(0);i<n-1;i++){
        int cs=i;
        for(int j(i+1);j<n;j++) if(arr[cs]>arr[j]) cs =j;
        swap(arr[cs],arr[i]);
        for(int i(0);i<n;i++) cout<<arr[i]<<" ";
        cout<<'\n';
    }
}