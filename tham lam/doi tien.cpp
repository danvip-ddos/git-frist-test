#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int arr[]={1,2,5,10,20,50,100,200,500,1000};
    int i(9),c(0);
    while(n){
        if(n-arr[i]>=0) {n-=arr[i]; c++;}
            else i--;
    }
    return c;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<solve(n)<<'\n';
    }
}
