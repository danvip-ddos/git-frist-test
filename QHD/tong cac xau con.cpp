#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        string x; cin>>x;
        long long n(x.length());
        long long ans(0);
        long long dyn[n]; // tong cac xau con ket thuc tai arr[n-1]
        for(long long i(0);i<n;i++){
            dyn[i]=(long long)(x[i]-'0');
            if(i>0) dyn[i] += i*(long long)(x[i]-'0')+dyn[i-1]*10;
            ans+=dyn[i];
        }
        cout<<ans<<'\n';
    }
}
