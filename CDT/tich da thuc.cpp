#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

main(){
    int t; cin>>t;
    while(t--){
        int m,n; cin>>m>>n;
        int firArr[m],secArr[n];
        for(int i(0);i<m;i++) cin>>firArr[i];
        for(int i(0);i<n;i++) cin>>secArr[i];

        int lengthOfAns=m+n-1;
        int ansArr[lengthOfAns];
        memset(ansArr,0,sizeof(ansArr));
        
        for(int i(0);i<m;i++)
            for(int j(0);j<n;j++){
                ansArr[i+j]+=firArr[i]*secArr[j];
            } 

        for(int i(0);i<lengthOfAns;i++) cout<<ansArr[i]<<' ';
        cout<<'\n';
    }
}

/*
4 3

0 1 2 3
1 0 3 2
x
0 1 2
3 2 2
________


*/
