#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int dyn[n+1][k+1]; 
        for(int i(0);i<=n;i++) {
            for(int j(0);j<=k;j++) dyn[i][j]=0;
        }
        for(int i(1);i<=9;i++) if(i<=k) dyn[1][i]=1;

        for(int i(2);i<=n;i++){
            for(int j(1);j<=9*i;j++) {
                if(j>k) break;
                for(int x(9);x>=0;x--) if(j-x>0&&j-x<=(i-1)*9) dyn[i][j]=(dyn[i][j]+dyn[i-1][j-x])%mod;
            }
        }
        if(n*9<k||k<0) cout<<"0\n";
            else cout<<dyn[n][k]<<'\n';
    }
}
