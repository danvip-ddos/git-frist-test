#include <bits/stdc++.h>
using namespace std;

long long mod =1e9+7;
main(){
    long long** C= new long long* [1001];
    for(int i=1;i<=1001;i++) C[i]=new long long[1001];
    for(int i=1;i<=1001;i++)
        for(int j=0;j<=i;j++){

                if(j==0||j==i) C[i][j]=1;
                else if(j==1) C[i][j]=i;
                else C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod; 
             
        }     
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k; 
        {cout<<C[n][k]<<'\n';   continue;}     
        
    }
    for(int i=1;i<=100;i++) delete[] C[i];
    delete[] C;
}
