#include <bits/stdc++.h>

using namespace std;

int myLog2(long long n){
    int res(0);
    while(n){
        res++;
        n/=2;
    }
    return res;
}
long long myPow(long long n,int k){
    long long res(1);
    for(int i(0);i<k;i++) res*=n;
    return res;
}

int toBin(long long n, long long k){
    long long len = myPow(2,myLog2(n))-1;
    long long mid =len/2+1;
    if(k==mid) return n%2;
    else if(k<mid) return toBin(n/2,k);
    else return toBin(n/2,k-mid);
}

main(){
     int t; cin>>t;
     while(t--){
        int count(0);
        long long n,l,r;
        cin>>n>>l>>r;

        for(long long i(l);i<=r;i++) 
            if(toBin(n,i)) count++;
        
        cout<<count<<'\n';
     }
}
/*
    3
    1
    1 1 1
    4
    0
    1 0 1 0 1 0 1

    0
    1
    1 0 1
    1 1 1
    1 0 1 0 1 0 1
    1 0 1 1 1 0 1
    1 1 1 0 1 1 1
    1 1 1 1 1 1 1 
*/