#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int arr[n]; int A[41];
        memset(A,0,sizeof(A));
        for(int i(0);i<k;i++) {
            cin>>arr[i];
            A[arr[i]]++;
        }

        int c(0),x(k);
        while(x--){ // x==k
            if(arr[x]<n-(k-1-x)) {
                arr[x]++;
                for(int j(x+1);j<n;j++) arr[j]=arr[j-1]+1; 
                for(int j(0);j<k;j++) if(A[arr[j]]+1>1) c++;
                break;
            }
           
        }
        cout<<k-c<<'\n';
    }
}