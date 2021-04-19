#include <bits/stdc++.h>

using namespace std;

long long fib[93];
char Try(int n,long long k){
    if(n==1) return '0';
    if(n==2) return '1';

    if(k<=fib[n-2]) return Try(n-2,k);
    else return Try(n-1,k-fib[n-2]);
}
main(){

     fib[2]=fib[1]=1;
     for(int i(3);i<93;i++) fib[i]=fib[i-1]+fib[i-2];
     
     int t; cin>>t;
     while(t--){
        int n;
        long long k;
        cin>>n>>k;
        cout<<Try(n,k)<<'\n';
     }
}
/*
0
1
01
101
01101
10101101
**/