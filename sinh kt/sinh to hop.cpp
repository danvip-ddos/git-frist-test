#include <bits/stdc++.h>

using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;;
        int arr[k];
        for(int i(0);i<k;i++) arr[i]=i+1;

        while(1){

            for(int j(0);j<k;j++) cout<<arr[j];
            cout<<' ';

            int i(k-1);
            for(;i>=0;i--){
                if(arr[i]<n-(k-1-i)) {
                    arr[i]++;
                    for(int j(i+1);j<k;j++) arr[j]=arr[j-1]+1;
                    break;
                }
            }

            if(i==-1) break;
        }

        cout<<'\n';
    }
}