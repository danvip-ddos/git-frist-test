#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        string x; cin>>x;
        int len(x.length());
        bool dyn[len+1][len+1]; int ans(1);

        for(int i(0);i<len;i++) dyn[i][i]=true;

        for(int i(0);i<len-ans;i++)
            for(int j(i+ans);j<len;j++) {
            if(x[i]!=x[j]) dyn[i][j]=false;
            else if(x[i]==x[j]) {
                if(i==j-1) dyn[i][j]=true;
                else dyn[i][j]=dyn[i+1][j-1];
            }
            if(dyn[i][j]) ans=max(ans,j-i);                
        }
        cout<<ans<<'\n';
    }  
}