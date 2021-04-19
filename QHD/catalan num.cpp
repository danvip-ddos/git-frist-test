#include <bits/stdc++.h>
using namespace std;

main(){
    long long catalan[101];
    catalan[0]=catalan[1]=1;
    for(int i(2);i<101;i++) catalan[i]=(2*(long long)(i-1)+1)*2*catalan[i-1]/(long long)(i+1);
//    for(int i(0);i<101;i++) cout<<catalan[i]<<' '; so quas to
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<catalan[n]<<'\n';
    }  
}