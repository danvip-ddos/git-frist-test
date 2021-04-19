#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n,ins,del,cop; cin>>n>>ins>>del>>cop;
        int dyn[n+1]; // insert and copy
        for(int i(0);i<=n;i++) {
            dyn[i]=0;
            if(i==1) {dyn[i]=ins; continue;}
            if(i%2) dyn[i]= min(min(dyn[i-1]+ins,dyn[i/2]+cop+ins),dyn[(i+1)/2]+cop+del);
            else dyn[i]= min(dyn[i-1]+ins,dyn[i/2]+cop);
        }

        cout<<dyn[n]<<'\n';
    }
}
