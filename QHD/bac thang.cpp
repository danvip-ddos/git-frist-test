#include <bits/stdc++.h>
using namespace std;

long long mod =1e9+7;
main(){
    // qhd so cach buoc lên cau thang n bac (k=n)
    int A[101]; A[1]=1;A[2]=2;
    for(int i(3);i<101;i++) {
        A[i]=0;
        for(int j(1);j<i;j++) A[i]+=A[j];
        A[i]++;
    }
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k; 
        int arr[n+1];
        if(k>=n){ // N bac thang VA K>=N
            for(int i(1);i<101&&i<=n;i++) arr[i]=A[i];
            if(n>100) for(int i(101);i<=n;i++) {
                arr[i]=0;
                for(int j(1);j<i;j++) arr[i]+=arr[j];
                arr[i]++;  // th có 1 buoc n 
            }
        }
        else {
            for(int i(1);i<101&&i<=k;i++) arr[i]=A[i];
            for(int i(k+1);i<=n;i++){
                arr[i]=0;
                for(int j(i-k);j<i;j++) arr[i]+=arr[j];
            }
        }
        cout<<arr[n]<<'\n';
    }
}
