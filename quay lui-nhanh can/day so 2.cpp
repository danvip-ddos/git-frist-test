#include <bits/stdc++.h>
using namespace std;

int arr[11][11];
void Try(int n, int k){
    for(int i(0);i<n-k-1;i++){
        //int temp(arr[i]);
        arr[k+1][i]=arr[k][i]+arr[k][i+1];
    //    if(i!=n-k-2) cout<<arr[i]<<' ';
    //    else cout<<arr[i]<<"]\n";
    }
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        //int arr[n];
        for(int i(0);i<n;i++) cin>>arr[0][i]; 
        
        for(int i(0);i<n-1;i++) Try(n,i);

        for(int i(n-1);i>=0;i--){
            cout<<'[';
            for(int j(0);j<n-i-1;j++) cout<<arr[i][j]<<' ';
            cout<<arr[i][n-i-1]<<"] ";
        }
        cout<<'\n';
    }
}