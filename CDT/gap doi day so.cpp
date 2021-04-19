#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long mu(long long n,long long k){
    long long ans=1;
    for(long long i(0);i<k;i++) ans*=n;
    return ans;
}
main(){
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;
        while(n--){
            long long num= mu(2,n+1)-1; 
            if(k==num/2+1) { cout<<n+1; break;}
            else if(k>num/2+1) k=k-(num/2+1);
        }
        cout<<'\n';     
    }
}
