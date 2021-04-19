#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
long long solve(int n){
    long long res(0);
    long long arr[n];
    for(int i(0);i<n;i++) cin>>arr[i];
    sort(arr,arr+n);

    int x = 0; 
    if((n)%2) {
		res=arr[x];
    	x++;
	}
    for(int i(x);i<n;i+=2){
       res*=10;
       res+=arr[i]+arr[i+1];
    }
    return res;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<solve(n)<<'\n';
    }
}
