#include <bits/stdc++.h>
using namespace std;

map<int,int> myMap;
bool cmp (int a,int b){
    return myMap[a]>myMap[b];
}
main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int arr[n];
    myMap.clear();
    for(int i(0);i<n;i++) {
        cin>>arr[i];
        if(myMap.find(arr[i])!=myMap.end()) myMap[arr[i]]++;
        else myMap[arr[i]]=1;
    }
    sort(arr,arr+n);
    sort(arr,arr+n,cmp);
    for(int i(0);i<n;i++) cout<<arr[i]<<' ';
    cout<<'\n';
    }
}