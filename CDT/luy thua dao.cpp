#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long getR(long long n){
    long long res(0);
    while(n){
        res=res*10+n%10;
        n/=10;
    }
    return res;
}
long long exp(long long n,long long k){
    if(k==1) return n;
    if(k==0) return 1;
    long long temp= exp(n,k/2);
    if(k%2) return (((temp*temp)%mod)*n)%mod;
    else return (temp*temp)%mod;
}
main(){
    int t; cin>>t;
    while(t--){
        long long n,r; cin>>n;
        r= getR(n);
        cout<<exp(n,r)<<'\n';
    }

}
