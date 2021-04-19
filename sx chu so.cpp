#include <bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int arr[10];for(int i(0);i<10;i++) arr[i]=0;
    for(int i(0);i<n;i++) {
        int x; cin>>x;
        while(x!=0) {arr[x%10]=1; x/=10;}
    }
    for(int i(0);i<10;i++) if(arr[i]) cout<<i<<' ';
    cout<<'\n';
    }
}