#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long exp(int n,int k){
    if(k==1) return n;
    if(k==0) return 1;
    long long temp= exp(n,k/2);
    if(k%2) return (((temp*temp)%mod)*(long long)n)%mod;
    else return (temp*temp)%mod;
}
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<exp(n,k)<<'\n';
    }

}
