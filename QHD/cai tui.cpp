#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n,v; cin>>n>>v;
        int arrV[n+1],arrC[n+1];

        for(int i(1);i<n;i++) cin>>arrV[i];
        for(int i(1);i<n;i++) cin>>arrC[i]; 

        int A[n+1][v+1]; 
        for(int i(0);i<=n;i++)
            for(int j(0);j<=v;j++) A[i][j]=0;
        for(int i(1);i<=n;i++){
            for(int j(1);j<=v;j++){
                if(j-arrV[i]>=0) A[i][j]=max(A[i-1][j],(A[i-1][j-arrV[i]])+arrC[i]);
                else A[i][j]=A[i-1][j];
            }
        }       
        cout<<A[n][v]<<'\n';
    }  
}