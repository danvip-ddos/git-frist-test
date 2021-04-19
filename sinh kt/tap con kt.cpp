#include <bits/stdc++.h>
using namespace std;

int  mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int arr[k];
        for(int i(0);i<k;i++)  cin>>arr[i];

        int i(k-1);
        for(;i>=0;i--){
            if(arr[i]<n-(k-1-i)) {
                arr[i]++; 
                break;
            }
        }
        if(i>-1) for(int j(i+1);j<k;j++) arr[j]=arr[j-1]+1;
        else for(int j(0);j<k;j++) arr[j]=j+1;


        for(int i(0);i<k;i++) cout<<arr[i]<<' ';
        cout<<'\n';
    }
}
