#include <bits/stdc++.h>

using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int arr[n];
        for(int i(0);i<n;i++) arr[i]=0;
        for(int i(0);i<k;i++) arr[n-1-i]=1;

        while(1){
            for(int j(0);j<n;j++) cout<<arr[j];
            cout<<' ';

            int i(n-1);int tem(0);
            for(;i>0;i--){
                
                if(arr[i]==1){
                    tem++;
                    if(arr[i-1]==0) {
                        arr[i-1]=1;
                        for(int x(i);x<n;x++) arr[x]=0;
                        for(int x(0);x<tem-1;x++) arr[n-1-x]=1;
                        break;
                    }
                    
                }
            }
            if(i==0) break;
        }

        cout<<'\n';
    }
}
