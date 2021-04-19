#include <bits/stdc++.h>
using namespace std;

main(){
    int dyn[51]; dyn[0]=dyn[1]=1; dyn[2]=2; dyn[3]=4;
    for(int i(4);i<51;i++) {
        dyn[i]=0;
        for(int j(i-3);j<i;j++) dyn[i]+=dyn[j];
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<dyn[n]<<'\n';
    }
}