#include <bits/stdc++.h>
using namespace std;

int  mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char arr[n];
        for(int i(0);i<n;i++) arr[i]='A';

        while(1){
            for(int j(0);j<n;j++) cout<<arr[j];
            cout<<' ';

            int i(n-1);
            for(;i>=0;i--) {
                if(arr[i]=='A') {
                    arr[i]='B';
                    for(int j(i+1);j<n;j++) arr[j]='A';
                    break;
                }
            }

            if(i==-1) {
                //for(int j(0);j<n;j++) cout<<arr[j]; 
                break;
            }
        }
        cout<<'\n';
    }
}
