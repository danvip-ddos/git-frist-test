#include <bits/stdc++.h>
using namespace std;

long long mod=123456789;

long long exp(int n,long long k){
    if(k==1) return n;
    if(k==0) return 1;
    long long temp= exp(n,k/2);
    if(k%2) return (((temp*temp)%mod)*(long long)n)%mod;
    else return (temp*temp)%mod;
}
main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        cout<<exp(2,n-1)<<'\n';
    }
}
