#include <bits/stdc++.h>
using namespace std;

int X;
bool cmp(int a, int b){
    return abs(X-a)<abs(X-b);
}
main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n>>X;
    int arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    sort(arr,arr+n,cmp);
    for(int i(0);i<n;i++) cout<<arr[i]<<' ';
    cout<<'\n';
    }
}