#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int dyn[n+1]; dyn[0]=0; dyn[1]=1;
        for(int i(2);i<=n;i++) {
            int temp = sqrt(i);
            dyn[i]=dyn[i-temp*temp]+1;
        }
        cout<<dyn[n]<<'\n';
         
    }
}
