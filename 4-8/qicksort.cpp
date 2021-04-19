#include <bits/stdc++.h>
using namespace std;

int  mod=1e9+7;

void SX(int arr[],int left,int right){
    if(left>=right) return;

    int mid=(left+right)/2;
    int x= arr[mid];
    int l=left;
    int r=right;

    while(1){
        while(arr[l]<x&&l<r) l++;
        while(arr[r]>x&&l<r) r--;
        swap(arr[l],arr[r]);
        if(l>=r) break;
        l++;r--;
    }
    
    SX(arr,left,l);
    SX(arr,l+1,right);

    
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i(0);i<n;i++) cin>>arr[i];

        SX(arr,0,n-1);

        for(int i(0);i<n;i++) cout<<arr[i]<<' ';
        cout<<'\n';
    }
    
}