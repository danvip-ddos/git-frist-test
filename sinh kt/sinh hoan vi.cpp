#include <bits/stdc++.h>

using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i(0);i<n;i++) arr[i]=i+1;

        while(1){

            for(int j(0);j<n;j++) cout<<arr[j];
            cout<<' ';

        int i(n-1);
        for(;i>0;i--) {
            if(arr[i]>arr[i-1] ){
                for(int j(n-1);j>=i;j--) if(arr[j]>arr[i-1]) {
                    swap(arr[j],arr[i-1]);
                    sort(arr+i,arr+n);
                    break;
                }
                break;
            }
        }

            if(i==0) break;
        }

        cout<<'\n';
    }
}