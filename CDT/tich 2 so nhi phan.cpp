#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long myPow(long long n,int k){
    long long res(1);
    for(int i(0);i<k;i++) res*=n;
    return res;
}
long long beConvert(string x){
    int n= x.length();
    long long res(0);
    for(int i(n-1);i>=0;i--){
        if(x[i]=='1') res+= myPow(2,n-1-i);
    }
    return res;
}
main(){
    int t; cin>>t;
    while(t--){
        string A,B;
        cin>>A>>B;
        long long numA(beConvert(A)),numB(beConvert(B));
        cout<<numA*numB<<'\n';
    }
}