#include <bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
        string x; cin>>x;
        int n(x.length());
        int dyn[n][n]; 
        for(int i(0);i<n;i++)
            for(int j(0);j<n;j++) dyn[i][j]=0;
        
        for(int i(0);i<n-1;i++) if(x[i]==x[i+1]) ; else dyn[i][i+1]=1;

        for(int dis(2);dis<n;dis++)
        for(int i(0);i<n-dis;i++) if(x[i]==x[i+dis]) dyn[i][i+dis]=dyn[i+1][i+dis-1] ;
                                    else dyn[i][i+dis]= min(dyn[i+1][i+dis]+1,dyn[i][i+dis-1]+1);

        cout<<dyn[0][n-1]<<'\n';    
    }
}
