#include<bits/stdc++.h>
using namespace std;

int mu(int x,int n){
    int res(1);
    for(int i(0);i<n;i++) res*=x;
    return res;
}
int larger(int n){
    int res(0),i(0);
    while(n){
        if(n%10==5) res+=6*mu(10,i);
        else res+=(n%10)*mu(10,i);
        i++;
        n/=10;
    }
    return res;
}
int lower(int n){
    int res(0),i(0);
    while(n){
        if(n%10==6) res+=5*mu(10,i);
        else res+=(n%10)*mu(10,i);
        i++;
        n/=10;
    }
    return res;
}

main(){
        int a,b; cin>>a>>b;
        cout<<lower(a)+lower(b)<<' '<<larger(a)+larger(b)<<'\n';
}
