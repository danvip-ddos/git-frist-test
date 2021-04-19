#include <bits/stdc++.h>
using namespace std;

main(){
    int n; cin>>n;
    int arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    for(int i(0);i<n-1;i++){
        int count =0;
        for(int j(1);j<n;j++) if(arr[j]<arr[j-1])  {
            swap(arr[j],arr[j-1]);
            count++;
        }
        if(count==0) break;
        for(int i(0);i<n;i++) cout<<arr[i]<<" ";
        cout<<'\n';
    }
}