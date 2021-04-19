#include <bits/stdc++.h>
using namespace std;

int  mod=1e9+7;

int findMax(int arr[],int l,int r){
    if(l==r) return arr[l];
    int mid=(l+r)/2;

    int x= findMax(arr,l,mid);
    int y= findMax(arr,mid+1,r);

    if(x>y) return x;
    else return y;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i(0);i<n;i++) cin>>arr[i];

        cout<<findMax(arr,0,n-1)<<'\n';
    }
    
}