#include <bits/stdc++.h>
using namespace std;

int bin_Search(int arr[],int l,int r, int num){
    while(l<=r){
        int mid=(l+r)>>1;
        if(arr[mid]==num) return mid;
        if(arr[mid]<num) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    int arr[n];
    int privot(-1);
    for(int i(0);i<n;i++) {
        cin>>arr[i];
        if(i==0) continue;
        if(arr[i]<arr[i-1]) privot=i;
    }
    int temp=bin_Search(arr,0,privot-1,k);

    if(temp>=0) cout<<temp+1<<'\n';
    else   cout<<bin_Search(arr,privot,n-1,k)+1<<'\n';

    }
}