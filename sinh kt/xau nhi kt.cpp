#include <bits/stdc++.h>
using namespace std;

int  mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        string x; cin>>x;

        int n(x.length());
        int i(n-1);
        for(;i>=0;i--) {
            if(x[i]=='0') {
                x[i]='1';
                break;
            }
        }
        for(int j(i+1);j<n;j++) x[j]='0';

        cout<<x<<'\n';
    }
}
