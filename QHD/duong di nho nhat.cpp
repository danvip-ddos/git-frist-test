#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int dyn[n+1][m+1]; 
        for(int i(0);i<n+1;i++) 
            for(int j(0);j<m+1;j++) dyn[i][j]=0;
        
        int max(0);
        for(int i(1);i<=n;i++) 
            for(int j(1);j<=m;j++) {
                int x; cin >>x; 
                
                if(i>1&&j>1) dyn[i][j]=min(min(dyn[i][j-1],dyn[i-1][j]),dyn[i-1][j-1])+x;
                else if(i==1)  dyn[i][j]= dyn[i][j-1]+x;
                else if(j==1) dyn[i][j]= dyn[i-1][j]+x;
            }

        cout<<dyn[n][m]<<'\n';       
    }  
}