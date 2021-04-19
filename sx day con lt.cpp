#include <bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    vector<int> tempArr(arr,arr+n);
    sort(tempArr.begin(),tempArr.end());
    int l(0),r(n-1);
    while(arr[l]==tempArr[l]) l++;
    while(arr[r]==tempArr[r]) r--;
    cout<<l+1<<' '<<r+1;
    cout<<'\n';
    }
}