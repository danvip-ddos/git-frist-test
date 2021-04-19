#include <bits/stdc++.h>
using namespace std;

main(){

    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        string x,y,z; cin>>x>>y>>z;
        int L[a+1][b+1][c+1];
        for(int i(0);i<=a;i++)
         for(int j(0);j<=b;j++)
            for(int k(0);k<=c;k++){
                L[i][j][k]=0; if(i*j*k ==0) continue;
                if(x[i-1]==y[j-1]&&y[j-1]==z[k-1]) L[i][j][k]= L[i-1][j-1][k-1] + 1; 
                else
                    L[i][j][k] = max(max(L[i-1][j][k], L[i][j-1][k]),L[i][j][k-1]); 
            }

        cout<<L[a][b][c]<<'\n';
    }
}
