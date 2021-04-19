#include <bits/stdc++.h>
#define MAX 11

using namespace std;

long long mod=1e9+7;
long long arr[MAX][MAX];
long long clon[MAX][MAX];
int num;
int expon; 

void mul(long long withMul[MAX][MAX]){
    long long temp[num+1][num+1];
    long long tempMul[num+1][num+1];

    for(int i(0);i<num;i++)
        for(int j(0);j<num;j++) temp[i][j]=clon[i][j];
    
    for(int i(0);i<num;i++)
        for(int j(0);j<num;j++) tempMul[i][j]=withMul[i][j];

    for(int i(0);i<num;i++)
        for(int j(0);j<num;j++){
            clon[i][j]=0;
            for(int k(0);k<num;k++) clon[i][j]=(clon[i][j]+(temp[i][k]*tempMul[k][j])%mod)%mod;
        }   
}

void solveExp(int curExp){
    if(curExp==1) {
        for(int i(0);i<num;i++)
            for(int j(0);j<num;j++) clon[i][j]=arr[i][j];

        return;
    }
    solveExp(curExp/2);
    mul(clon);
    if(curExp%2) mul(arr);
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>num>>expon;
        for(int i(0);i<num;i++)
            for(int j(0);j<num;j++) cin>>arr[i][j];

        solveExp(expon);
        for(int i(0);i<num;i++)
            {
                for(int j(0);j<num;j++) cout<<clon[i][j]<<' ';
                cout<<'\n';
            }
    }

}