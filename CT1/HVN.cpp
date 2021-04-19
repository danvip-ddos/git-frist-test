#include <bits/stdc++.h>
using namespace std;

main(){
int t; cin>>t;
while(t--){
    int n; cin>>n;
    int arr[n];
    for(int i(0);i<n;i++) {arr[i]=n-i; cout<<arr[i];} cout<<' ';

    int i=n;
    while(i--){
        if(i==0) break;
        if(arr[i]<arr[i-1]) {
            for(int j(n-1);j>i-1;j--) if(arr[j]<arr[i-1]) {swap(arr[i-1],arr[j]); sort(arr+i,arr+n,greater<int>()); break;}    
            for(int j(0);j<n;j++) {cout<<arr[j];}
            cout<<' '; 
            i=n;
        }
        
    }
    cout<<'\n';
}

}