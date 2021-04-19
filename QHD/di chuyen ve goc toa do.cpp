#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int dyn[n+1][m+1]; 
        for(int i(0);i<=n;i++) {
            for(int j(0);j<=m;j++) if(i*j==0) dyn[i][j]=1; else dyn[i][j]=0;
        }
        dyn[0][0]=0;
        
        for(int i(1);i<=n;i++) 
            for(int j(1);j<=m;j++) dyn[i][j]=dyn[i][j-1]+dyn[i-1][j];
        cout<<dyn[n][m]<<'\n';
    }
}
